#include "SBZPartyHost.h"

USBZPartyHost::USBZPartyHost() {
    this->PartyTravelTimeout = 20.00f;
    this->PartyDisconnectTimeout = 20.00f;
}

void USBZPartyHost::NotifyClientLeftLobby(const FUniqueNetIdRepl& PartyMemberId) {
}

void USBZPartyHost::NotifyClientFailedConnectionToLobby(const FUniqueNetIdRepl& PartyMemberNetId) {
}

void USBZPartyHost::NotifyClientConnectedToLobby(const FUniqueNetIdRepl& PartyMemberNetId) {
}

void USBZPartyHost::HandlePartyTravelTimeout() {
}

void USBZPartyHost::HandlePartyLeaveLobbyTimeout() {
}

void USBZPartyHost::FirePartyUpdated(APlayerState* ChangedPlayerState) {
}

void USBZPartyHost::BroadcastPartyTravelled(ESBZOnlineCode Result) {
}

void USBZPartyHost::BroadcastPartyLeftLobby(ESBZOnlineCode Result) {
}


