#include "SBZStateMachineStateWaitingActionPhaseBase.h"

void USBZStateMachineStateWaitingActionPhaseBase::HandleTransitionGameModeReady() {
}

void USBZStateMachineStateWaitingActionPhaseBase::HandleNetworkError(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingActionPhaseBase::HandleGameReady() {
}

void USBZStateMachineStateWaitingActionPhaseBase::HandleCinematicStopped() {
}

void USBZStateMachineStateWaitingActionPhaseBase::HandleCinematicStarted() {
}

void USBZStateMachineStateWaitingActionPhaseBase::HandleBeaconNetworkError(ESBZOnlineCode Result) {
}

void USBZStateMachineStateWaitingActionPhaseBase::DelayedNetworkBeaconError() {
}

USBZStateMachineStateWaitingActionPhaseBase::USBZStateMachineStateWaitingActionPhaseBase() {
    this->TransitionTimeOutTime = 20.00f;
    this->WaitActionPhaseData = NULL;
}

