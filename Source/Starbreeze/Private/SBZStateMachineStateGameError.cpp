#include "SBZStateMachineStateGameError.h"

USBZStateMachineStateGameError::USBZStateMachineStateGameError() {
    this->ErrorData = NULL;
    this->GameErrorWidget = NULL;
    this->GameDataState = ESBZGameDataState::NotLoggedIn;
}

void USBZStateMachineStateGameError::SetNetworkConnected(ESBZServiceStatus ServiceStatus) {
}


