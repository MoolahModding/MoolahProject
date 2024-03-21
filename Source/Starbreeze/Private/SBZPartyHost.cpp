#include "SBZPartyHost.h"

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

USBZPartyHost::USBZPartyHost() {
    this->PartyTravelTimeout = 20.00f;
    this->PartyDisconnectTimeout = 20.00f;
}

