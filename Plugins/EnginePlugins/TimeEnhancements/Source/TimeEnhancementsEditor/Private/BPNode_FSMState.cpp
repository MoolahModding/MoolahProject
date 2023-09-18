// Copyright (C) 2019 Pedro Montoto Garc�a - All Rights Reserved

#include "BPNode_FSMState.h"
#include "BlueprintNodeSpawner.h"
#include "EditorCategoryUtils.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintActionMenuItem.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/SCS_Node.h"
#include "EdGraphSchema_K2.h"
#include "EdGraphSchema_K2_Actions.h"
#include "KismetCompilerMisc.h"
#include "KismetCompiler.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/BlueprintEditorUtils.h"

#define LOCTEXT_NAMESPACE "FTimeEnhancementsEditorModule"

DEFINE_LOG_CATEGORY(FSMLog);

class FBPNode_FSMStateHandlingFunctor : public FNodeHandlingFunctor
{
public:
	FBPNode_FSMStateHandlingFunctor(FKismetCompilerContext& InCompilerContext)
		: FNodeHandlingFunctor(InCompilerContext)
	{
	}
	virtual void Compile(FKismetFunctionContext& Context, UEdGraphNode* Node) override
	{
	}
};

UBPNode_FSMState::UBPNode_FSMState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UBPNode_FSMState::AllocateDefaultPins()
{
	UE_LOG(FSMLog, Log, TEXT("Allocating default pins for node %s"), *(GetName()))

	UEdGraphPin* FSMPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, FiniteStateMachinePinName);
	FSMPin->bNotConnectable = true;
	UEdGraphPin* NamePin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, StatePinName);
	NamePin->bNotConnectable = true;

	UEnum* TheEnum = GetUEnumFromStateMachine();
	for (int32 EnumIndex = 0; EnumIndex < TheEnum->NumEnums() - 1; ++EnumIndex)
	{
		UEdGraphPin* Pin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, FName(*TheEnum->GetNameStringByIndex(EnumIndex)));
		Pin->PinFriendlyName = TheEnum->GetDisplayNameTextByIndex(EnumIndex);
	}
}

void UBPNode_FSMState::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	UE_LOG(FSMLog, Log, TEXT("Expanding node %s"), *(GetName()))
	CompilerContext.MessageLog.BeginEvent(*LOCTEXT("UBPNode_FSMState.StartCompile", "Expanding node @@").ToString());

	UEdGraphPin* FSMStateNamePin = FindPin(StatePinName, EGPD_Input);
	const FName FSMStateName = FName(*FSMStateNamePin->DefaultValue);

	if (FSMStateName == NAME_None)
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("UBPNode_FSMState.NoStateNameError", "Node @@: Needs a State Name").ToString(), this);
		CompilerContext.MessageLog.EndEvent();
		return;
	}

	// We create or defer to an already created event node bound to the state machine delegate
	if (UK2Node_ComponentBoundEvent* EventSource = FindOrCreateComponentBoundEvent(CompilerContext, SourceGraph))
	{
		// Then we create a sequence with an output exec pin for each state name created using this node
		UK2Node_SwitchName* FirstSequenceBranch = FindOrCreateSwitchNameNode(CompilerContext, SourceGraph, EventSource->FindPin(UEdGraphSchema_K2::PN_Then, EGPD_Output));
		UEdGraphPin* ThisStatePin = FirstSequenceBranch->FindPin(FSMStateName, EGPD_Output);
		FirstSequenceBranch->PinNames.AddUnique(FSMStateName);
		ThisStatePin = ThisStatePin ? ThisStatePin : FirstSequenceBranch->CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, FSMStateName);

		// Switch on state event type
		UEdGraphPin* StateEventTypePin = EventSource->FindPin(FName("StateEvent"), EGPD_Output);
		UEnum* TheEnum = GetUEnumFromStateMachine();
		UK2Node_SwitchEnum* SwitchOnStateEventNode = CompilerContext.SpawnIntermediateNode<UK2Node_SwitchEnum>(this);
		SwitchOnStateEventNode->bHasDefaultPin = false;
		SwitchOnStateEventNode->Enum = TheEnum;
		SwitchOnStateEventNode->AllocateDefaultPins();
		CompilerContext.GetSchema()->TryCreateConnection(StateEventTypePin, SwitchOnStateEventNode->GetSelectionPin());

		// Tie state name and state event type together
		CompilerContext.GetSchema()->TryCreateConnection(ThisStatePin, SwitchOnStateEventNode->GetExecPin());

		for (int32 EnumIndex = 0; EnumIndex < TheEnum->NumEnums() - 1; ++EnumIndex)
		{
			UEdGraphPin* PinInRealNode = FindPin(FName(*TheEnum->GetNameStringByIndex(EnumIndex)), EGPD_Output);
			UEdGraphPin* PinInIntermediate = SwitchOnStateEventNode->FindPin(FName(*TheEnum->GetNameStringByIndex(EnumIndex)), EGPD_Output);
			CompilerContext.CopyPinLinksToIntermediate(*PinInRealNode, *PinInIntermediate);
		}

		FirstSequenceBranch->ExpandNode(CompilerContext, SourceGraph);
		SwitchOnStateEventNode->ExpandNode(CompilerContext, SourceGraph);
	}

	SourceGraph->MarkPackageDirty();

	CompilerContext.MessageLog.EndEvent();
}

void UBPNode_FSMState::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UBPNode_FSMState* TemplateNode = NewObject<UBPNode_FSMState>(GetTransientPackage(), GetClass());
	UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create<UBPNode_FSMState>();

	ActionRegistrar.AddBlueprintAction(Spawner);
}

FText UBPNode_FSMState::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	switch (TitleType)
	{
	case ENodeTitleType::Type::ListView: return LOCTEXT("UBPNode_FSMState.NodeListViewTitle", "Create New FSM State...");
	case ENodeTitleType::Type::EditableTitle: return LOCTEXT("UBPNode_FSMState.NodeEditableTitle", "FSM State Editable Title");
	case ENodeTitleType::Type::MenuTitle: return LOCTEXT("UBPNode_FSMState.NodeMenuTitle", "Create New FSM State...");
	case ENodeTitleType::Type::FullTitle: return LOCTEXT("UBPNode_FSMState.NodeFullTitle_Complete", "FSM State");
	default: return LOCTEXT("UBPNode_FSMState.NodeDefaultTitle", "FSM State Default Node Title");
	}
}

bool UBPNode_FSMState::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraph(Graph);
	return (Blueprint != nullptr) && FBlueprintEditorUtils::IsActorBased(Blueprint) && Super::IsCompatibleWithGraph(Graph);
}

FNodeHandlingFunctor* UBPNode_FSMState::CreateNodeHandler(FKismetCompilerContext& CompilerContext) const
{
	return new FBPNode_FSMStateHandlingFunctor(CompilerContext);
}

UK2Node_ComponentBoundEvent* UBPNode_FSMState::FindOrCreateComponentBoundEvent(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	UEdGraphPin* FSMPin = FindPin(FiniteStateMachinePinName, EGPD_Input);
	const UClass* FSMClass = UFiniteStateMachineComponent::StaticClass();
	const FName FSMName = FName(*FSMPin->DefaultValue);
	const FName FSMEventName = "StateEvent";
	UObjectProperty* VariableProperty = FindField<UObjectProperty>(GetBlueprint()->SkeletonGeneratedClass, FSMName);
	UMulticastDelegateProperty* DelegateProperty = FindField<UMulticastDelegateProperty>(FSMClass, FSMEventName);

	if (!VariableProperty || !DelegateProperty)
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("UBPNode_FSMState.NoStateMachineNameError", "Node @@: FiniteStateMachineComponent with given name not found in class").ToString(), this);
		CompilerContext.MessageLog.EndEvent();
		return nullptr;
	}

	auto TryGetNode = [](UMulticastDelegateProperty* DelegateProperty, UObjectProperty* VariableProperty, FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) {

		if (DelegateProperty == nullptr || VariableProperty == nullptr)
		{
			return (UK2Node_ComponentBoundEvent*)nullptr;
		}

		TArray<UK2Node_ComponentBoundEvent*> ReturnNodes;
		SourceGraph->GetNodesOfClass(ReturnNodes);
		for (UK2Node_ComponentBoundEvent* Node : ReturnNodes)
		{
			if ((Node->ComponentPropertyName == VariableProperty->GetFName()) && (Node->DelegatePropertyName == DelegateProperty->GetFName()))
			{
				return Node;
			}
		}

		return (UK2Node_ComponentBoundEvent*)nullptr;
	};

	UK2Node_ComponentBoundEvent* EventSource = TryGetNode(DelegateProperty, VariableProperty, CompilerContext, SourceGraph);
	if (EventSource)
	{
		UE_LOG(FSMLog, Log, TEXT("Expanding node %s: Found intermediate %s:%s"), *(GetName()), *(EventSource->GetName()), *(EventSource->EventReference.GetMemberName().ToString()))
	}
	else
	{
		EventSource = CompilerContext.SpawnIntermediateEventNode<UK2Node_ComponentBoundEvent>(this);
		EventSource->InitializeComponentBoundEventParams(VariableProperty, DelegateProperty);
		EventSource->AllocateDefaultPins();
		UE_LOG(FSMLog, Log, TEXT("Expanding node %s: Created intermediate %s:%s"), *(GetName()), *(EventSource->GetName()), *(EventSource->EventReference.GetMemberName().ToString()))
	}

	EventSource->ExpandNode(CompilerContext, SourceGraph);
	return EventSource;
}

UK2Node_SwitchName* UBPNode_FSMState::FindOrCreateSwitchNameNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph, UEdGraphPin* Pin)
{
	if (Pin && Pin->LinkedTo.Num() > 0 && Pin->LinkedTo[0])
	{
		if (Pin->LinkedTo[0]->GetOwningNode()->IsA(UK2Node_SwitchName::StaticClass()))
		{
			UE_LOG(FSMLog, Log, TEXT("Expanding node %s: Found intermediate %s"), *(GetName()), *(Pin->LinkedTo[0]->GetOwningNode()->GetName()))
			return Cast<UK2Node_SwitchName>(Pin->LinkedTo[0]->GetOwningNode());
		}
	}

	UK2Node_SwitchName* CreatedNode = CompilerContext.SpawnIntermediateNode<UK2Node_SwitchName>(this);
	CreatedNode->AllocateDefaultPins();
	CompilerContext.GetSchema()->TryCreateConnection(Pin, CreatedNode->GetExecPin());
	CompilerContext.GetSchema()->TryCreateConnection(Pin->GetOwningNode()->FindPin(FName("State"), EGPD_Output), CreatedNode->GetSelectionPin());
	UE_LOG(FSMLog, Log, TEXT("Expanding node %s: Created intermediate %s"), *(GetName()), *(CreatedNode->GetName()))

	CreatedNode->ExpandNode(CompilerContext, SourceGraph);

	return CreatedNode;
}

UEnum * UBPNode_FSMState::GetUEnumFromStateMachine()
{
	UEnum* TheEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EFiniteStateMachineStateEvent"), true);
	UE_LOG(FSMLog, Log, TEXT("Getting enum for node %s: %s"), *(GetName()), *(TheEnum->GetName()))
	PreloadObject(TheEnum);
	TheEnum->ConditionalPostLoad();
	return TheEnum;
}
