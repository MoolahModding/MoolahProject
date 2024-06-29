#include "SBZOnlineSessionRequestHandler.h"

USBZOnlineSessionRequestHandler::USBZOnlineSessionRequestHandler() {
    this->Lobby = NULL;
    this->Party = NULL;
    this->SBZOnlineSessionUtils = NULL;
    this->SessionRequestTimeoutDuration = 50.00f;
    this->SBZOnlineSession = NULL;
}

EOnlineSessionInfo USBZOnlineSessionRequestHandler::GetSessionInfo() const {
    return EOnlineSessionInfo::Initial;
}


