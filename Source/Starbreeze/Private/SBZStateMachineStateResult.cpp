#include "SBZStateMachineStateResult.h"

USBZStateMachineStateResult::USBZStateMachineStateResult() {
    this->ResultWidget = NULL;
    this->LoadingScreen = NULL;
    this->ResultData = NULL;
}

void USBZStateMachineStateResult::OnRestartTimeExpired() {
}

void USBZStateMachineStateResult::OnRestartCountdownTimerUpdated() {
}

void USBZStateMachineStateResult::OnRestartCountdownTimerStarted(float TimeRemainingUntilRestart) {
}

void USBZStateMachineStateResult::OnRestartAcceptTimerUpdated() {
}

void USBZStateMachineStateResult::OnRestartAccepted(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateResult::OnExpireRestartTimerUpdate() {
}

void USBZStateMachineStateResult::HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& InData) {
}


