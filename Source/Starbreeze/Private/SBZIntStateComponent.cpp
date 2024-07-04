#include "SBZIntStateComponent.h"
#include "Net/UnrealNetwork.h"

USBZIntStateComponent::USBZIntStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = 0;
    this->bClientDelayStateFromServer = false;
    this->ClientStateDelay = 0.20f;
}

void USBZIntStateComponent::SetState(int32 NewState, bool bDoCosmetics) {
}

void USBZIntStateComponent::SetLocalState(int32 NewState, bool bDoCosmetics) {
}

void USBZIntStateComponent::OnRep_State(int32 OldState) {
}

void USBZIntStateComponent::Multicast_SetState_Implementation(int32 NewState) {
}

void USBZIntStateComponent::IncreaseState(bool bDoCosmetics) {
}

void USBZIntStateComponent::DecreaseState(bool bDoCosmetics) {
}

void USBZIntStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZIntStateComponent, State);
}


