#include "SBZStateMachineStateWaitingActionPhaseHost.h"

void USBZStateMachineStateWaitingActionPhaseHost::PostLoadTransitionMap(UWorld* NewWorld) {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandlePlayerRegister(APlayerState* ChangedPlayerState) {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandlePlayerControllerReady() {
}

void USBZStateMachineStateWaitingActionPhaseHost::HandlePlayerAckReceived(FUniqueNetIdRepl PlayerId) {
}

void USBZStateMachineStateWaitingActionPhaseHost::DestinationMapLoaded(UWorld* NewWorld) {
}

USBZStateMachineStateWaitingActionPhaseHost::USBZStateMachineStateWaitingActionPhaseHost() {
    this->TimeOutAck = 15.00f;
}

