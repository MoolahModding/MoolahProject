#include "SBZStateMachineSharedState.h"
#include "Net/UnrealNetwork.h"

USBZStateMachineSharedState::USBZStateMachineSharedState() {
    this->OnlineSessionPhase = ESBZOnlineSessionPhase::Undefined;
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
}

void USBZStateMachineSharedState::NotifyServerInActionPhase_Implementation() {
}

void USBZStateMachineSharedState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZStateMachineSharedState, OnlineSessionPhase);
}


