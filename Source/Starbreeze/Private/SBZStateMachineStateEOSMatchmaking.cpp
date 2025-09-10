#include "SBZStateMachineStateEOSMatchmaking.h"

USBZStateMachineStateEOSMatchmaking::USBZStateMachineStateEOSMatchmaking() {
    this->LoadingScreen = NULL;
    this->MatchmakingData = NULL;
    this->MaxLobbyConnectionAttempts = 3;
}

void USBZStateMachineStateEOSMatchmaking::OnPopupSessionDoesNotExistClosed(FName InCloseActionName) {
}

void USBZStateMachineStateEOSMatchmaking::HandleBeaconDisconnect() {
}


