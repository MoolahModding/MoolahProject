#include "FiniteStateMachineComponent.h"
#include "Net/UnrealNetwork.h"

UFiniteStateMachineComponent::UFiniteStateMachineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialState = TEXT("Init");
}

void UFiniteStateMachineComponent::SetState(FName NewState) {
}

void UFiniteStateMachineComponent::SetLocalState(FName NewState) {
}

void UFiniteStateMachineComponent::OnRep_State() {
}

void UFiniteStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFiniteStateMachineComponent, State);
}


