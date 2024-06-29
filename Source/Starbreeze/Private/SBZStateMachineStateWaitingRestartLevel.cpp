#include "SBZStateMachineStateWaitingRestartLevel.h"

USBZStateMachineStateWaitingRestartLevel::USBZStateMachineStateWaitingRestartLevel() {
    this->RestartLevelData = NULL;
    this->LoadingScreen = NULL;
}

void USBZStateMachineStateWaitingRestartLevel::OnLocalPlayerStateReady() {
}

void USBZStateMachineStateWaitingRestartLevel::OnHandleGameStateReady() {
}


