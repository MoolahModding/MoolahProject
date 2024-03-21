#include "SBZOnlineSessionRequestHandler.h"

EOnlineSessionInfo USBZOnlineSessionRequestHandler::GetSessionInfo() const {
    return EOnlineSessionInfo::Initial;
}

USBZOnlineSessionRequestHandler::USBZOnlineSessionRequestHandler() {
    this->Lobby = NULL;
    this->Party = NULL;
    this->SBZOnlineSessionUtils = NULL;
    this->SessionRequestTimeoutDuration = 50.00f;
    this->SBZOnlineSession = NULL;
}

