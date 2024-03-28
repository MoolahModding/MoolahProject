#include "SBZStateMachineStateGameStart.h"

void USBZStateMachineStateGameStart::SessionJoinStarted() {
}

void USBZStateMachineStateGameStart::SessionJoined(UWorld* InWorld) {
}

void USBZStateMachineStateGameStart::HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode) {
}

USBZStateMachineStateGameStart::USBZStateMachineStateGameStart() {
    this->LoadingScreen = NULL;
}

