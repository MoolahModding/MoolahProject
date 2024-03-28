#include "SBZStateMachineStateWaitingActionPhase.h"

void USBZStateMachineStateWaitingActionPhase::TravelToHostTimeout() {
}

void USBZStateMachineStateWaitingActionPhase::HandlePlayerControllerReady() {
}

void USBZStateMachineStateWaitingActionPhase::HandleNetworkError(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingActionPhase::HandleJoinedHost(UWorld* NewWorld) {
}

void USBZStateMachineStateWaitingActionPhase::HandleGameStateReady() {
}

void USBZStateMachineStateWaitingActionPhase::HandleBeaconNetworkError(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingActionPhase::DelayedNetworkBeaconError() {
}

void USBZStateMachineStateWaitingActionPhase::ConsumePreplanningAssets() {
}

USBZStateMachineStateWaitingActionPhase::USBZStateMachineStateWaitingActionPhase() {
    this->LoadingScreen = NULL;
    this->WaitingActionPhaseData = NULL;
}

