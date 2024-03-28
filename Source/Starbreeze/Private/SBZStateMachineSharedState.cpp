#include "SBZStateMachineSharedState.h"
#include "Net/UnrealNetwork.h"

void USBZStateMachineSharedState::NotifyServerInActionPhase_Implementation() {
}

void USBZStateMachineSharedState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZStateMachineSharedState, OnlineSessionPhase);
}

USBZStateMachineSharedState::USBZStateMachineSharedState() {
    this->OnlineSessionPhase = ESBZOnlineSessionPhase::Undefined;
}

