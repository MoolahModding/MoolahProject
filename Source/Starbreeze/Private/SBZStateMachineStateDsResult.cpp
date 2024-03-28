#include "SBZStateMachineStateDsResult.h"

void USBZStateMachineStateDsResult::OnRestartTimerFinsihed() {
}

void USBZStateMachineStateDsResult::OnRestartLevelTimeExpired() {
}

void USBZStateMachineStateDsResult::OnRestartAcceptTimerFinsihed() {
}

void USBZStateMachineStateDsResult::OnRestartAccepted(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsResult::DestinationMapLoaded(UWorld* NewWorld) {
}

USBZStateMachineStateDsResult::USBZStateMachineStateDsResult() {
    this->ResultStateTimeout = 60.00f;
    this->RestartAcceptTimeout = 15.00f;
    this->RestartInitiateTimeout = 5.00f;
    this->ResultWidget = NULL;
}

