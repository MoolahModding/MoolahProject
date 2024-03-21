#include "SBZStateMachineStateWaitingRestartLevel.h"

void USBZStateMachineStateWaitingRestartLevel::OnLocalPlayerStateReady() {
}

void USBZStateMachineStateWaitingRestartLevel::OnHandleGameStateReady() {
}

USBZStateMachineStateWaitingRestartLevel::USBZStateMachineStateWaitingRestartLevel() {
    this->RestartLevelData = NULL;
    this->LoadingScreen = NULL;
}

