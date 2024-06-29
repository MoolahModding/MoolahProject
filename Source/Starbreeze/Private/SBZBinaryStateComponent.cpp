#include "SBZBinaryStateComponent.h"
#include "Net/UnrealNetwork.h"

USBZBinaryStateComponent::USBZBinaryStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bState = false;
    this->bClientDelayStateFromServer = false;
    this->ClientStateDelay = 0.20f;
}

void USBZBinaryStateComponent::ToggleState(bool bDoCosmetics) {
}

void USBZBinaryStateComponent::SetState(bool bNewState, bool bDoCosmetics) {
}

void USBZBinaryStateComponent::SetLocalState(bool bNewState, bool bDoCosmetics) {
}

void USBZBinaryStateComponent::OnRep_State(bool bOldState) {
}

void USBZBinaryStateComponent::Multicast_SetState_Implementation(bool bNewState) {
}

void USBZBinaryStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZBinaryStateComponent, bState);
}


