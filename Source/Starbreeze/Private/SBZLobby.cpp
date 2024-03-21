#include "SBZLobby.h"

void USBZLobby::JoinLobbyComplete(ESBZOnlineCode Result) {
}

void USBZLobby::InitLobbyHostComplete(const ESBZOnlineCode& Result) {
}

void USBZLobby::HostMigrationSession(int32 HostId) {
}

void USBZLobby::HostLobbyComplete(ESBZOnlineCode Result) {
}

void USBZLobby::HostLobby(const FSBZOnlineSessionParams& Params) {
}

void USBZLobby::HandleLostConnectionToHost() {
}

USBZLobby::USBZLobby() {
    this->LocalState = NULL;
    this->DefaultPort = 16039;
    this->LobbyClient = NULL;
    this->LobbyHost = NULL;
    this->LobbyOnlineBeacon = NULL;
    this->BeaconActionPhaseClient = NULL;
    this->BeaconActionPhaseHost = NULL;
    this->ActionPhaseOnlineBeacon = NULL;
}

