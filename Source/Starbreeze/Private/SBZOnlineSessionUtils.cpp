#include "SBZOnlineSessionUtils.h"

bool USBZOnlineSessionUtils::IsPartyOwner() const {
    return false;
}

bool USBZOnlineSessionUtils::IsPartyClient() const {
    return false;
}

bool USBZOnlineSessionUtils::IsLobbyHost() const {
    return false;
}

bool USBZOnlineSessionUtils::IsLobbyClient() const {
    return false;
}

bool USBZOnlineSessionUtils::IsInSession() const {
    return false;
}

bool USBZOnlineSessionUtils::IsInParty() const {
    return false;
}

bool USBZOnlineSessionUtils::IsActionPhaseHost() const {
    return false;
}

bool USBZOnlineSessionUtils::IsActionPhaseClient() const {
    return false;
}

USBZOnlineSessionUtils::USBZOnlineSessionUtils() {
    this->Party = NULL;
    this->Lobby = NULL;
}

