#include "SBZStateMachineStateGameStart.h"

USBZStateMachineStateGameStart::USBZStateMachineStateGameStart() {
    this->LoadingScreen = NULL;
}

void USBZStateMachineStateGameStart::OnPopUpKickedFromHeistClosed(FName CloseActionName) {
}

void USBZStateMachineStateGameStart::HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode) {
}


