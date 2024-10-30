#include "SBZStateMachineStateABMatchmaking.h"

USBZStateMachineStateABMatchmaking::USBZStateMachineStateABMatchmaking() {
    this->LoadingScreen = NULL;
    this->MatchmakingData = NULL;
}

void USBZStateMachineStateABMatchmaking::OnPopupSessionDoesNotExistClosed(FName CloseActionName) {
}

void USBZStateMachineStateABMatchmaking::HandleBeaconDisconnect() {
}


