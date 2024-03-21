#include "SBZStateMachineStateResult.h"

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

USBZStateMachineStateResult::USBZStateMachineStateResult() {
    this->ResultWidget = NULL;
}

