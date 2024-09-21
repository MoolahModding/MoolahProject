#include "SBZStateMachineSharedState.h"
#include "Net/UnrealNetwork.h"

USBZStateMachineSharedState::USBZStateMachineSharedState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlineSessionPhase = ESBZOnlineSessionPhase::Undefined;
}

void USBZStateMachineSharedState::NotifyServerInActionPhase_Implementation() {
}

void USBZStateMachineSharedState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZStateMachineSharedState, OnlineSessionPhase);
}


