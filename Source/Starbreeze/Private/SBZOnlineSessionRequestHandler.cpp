#include "SBZOnlineSessionRequestHandler.h"

USBZOnlineSessionRequestHandler::USBZOnlineSessionRequestHandler() {
    this->Lobby = NULL;
    this->Party = NULL;
    this->SessionRequestTimeoutDuration = 50.00f;
}

EOnlineSessionInfo USBZOnlineSessionRequestHandler::GetSessionInfo() const {
    return EOnlineSessionInfo::Initial;
}


