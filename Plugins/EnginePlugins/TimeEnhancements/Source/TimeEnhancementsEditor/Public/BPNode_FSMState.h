// Copyright (C) 2019 Pedro Montoto Garc�a - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "TimeEnhancements/Public/FiniteStateMachineComponent.h"
#include "TimeEnhancementsEditor.h"
#include "K2Node_Literal.h"
#include "K2Node_CallFunction.h"
#include "K2Node_SwitchName.h"
#include "K2Node_SwitchEnum.h"
#include "K2Node_ComponentBoundEvent.h"
#include "BPNode_FSMState.generated.h"

/**
 * 
 */
UCLASS()
class TIMEENHANCEMENTSEDITOR_API UBPNode_FSMState : public UK2Node
{
	GENERATED_BODY()
public: 
	UBPNode_FSMState(const FObjectInitializer& ObjectInitializer);

	const FName FiniteStateMachinePinName = "FSM";
	const FName DefaultFSMName = "FSM_Component";
	const FName StatePinName = "State Name";

	// Begin UEdGraphNode interface.
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual FLinearColor GetNodeTitleColor() const override { return FLinearColor(0.1f, 1.0f, 0.51f, 0.5f); }
	// End UEdGraphNode interface.

	// Begin UK2Node interface
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	bool IsCompatibleWithGraph(UEdGraph const * Graph) const;
	virtual bool ShouldShowNodeProperties() const { return true; }
	virtual bool NodeCausesStructuralBlueprintChange() const { return true; }
	virtual bool IsNodeRootSet() const { return true; }
	virtual bool DrawNodeAsEntry() const { return true; }
	virtual FText GetMenuCategory() const override { return FText::FromString("FSMOnline"); }
	virtual class FNodeHandlingFunctor* CreateNodeHandler(class FKismetCompilerContext& CompilerContext) const override;
	// End UK2Node interface.

	UK2Node_ComponentBoundEvent* FindOrCreateComponentBoundEvent(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph);
	UK2Node_SwitchName* FindOrCreateSwitchNameNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph, UEdGraphPin* Pin);
	UEnum* GetUEnumFromStateMachine();
};

