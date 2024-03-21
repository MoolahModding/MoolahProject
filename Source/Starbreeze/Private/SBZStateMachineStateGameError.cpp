#include "SBZStateMachineStateGameError.h"

void USBZStateMachineStateGameError::SetNetworkConnected(ESBZServiceStatus ServiceStatus) {
}

USBZStateMachineStateGameError::USBZStateMachineStateGameError() {
    this->ErrorData = NULL;
    this->GameErrorWidget = NULL;
    this->GameDataState = ESBZGameDataState::NotLoggedIn;
}

