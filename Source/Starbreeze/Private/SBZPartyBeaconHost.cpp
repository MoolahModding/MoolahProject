#include "SBZPartyBeaconHost.h"

void ASBZPartyBeaconHost::NotifyClientLeftLobby(const FUniqueNetIdRepl& PartyMemberId) {
}

void ASBZPartyBeaconHost::NotifyClientFailedConnectionToLobby(const FUniqueNetIdRepl& PartyMemberNetId) {
}

void ASBZPartyBeaconHost::NotifyClientConnectedToLobby(const FUniqueNetIdRepl& PartyMemberNetId) {
}

void ASBZPartyBeaconHost::HandlePartyTravelTimeout() {
}

void ASBZPartyBeaconHost::HandlePartyLeaveLobbyTimeout() {
}

void ASBZPartyBeaconHost::FirePartyUpdated(APlayerState* ChangedPlayerState) {
}

void ASBZPartyBeaconHost::BroadcastPartyTravelled(ESBZOnlineCode Result) {
}

void ASBZPartyBeaconHost::BroadcastPartyLeftLobby(ESBZOnlineCode Result) {
}

ASBZPartyBeaconHost::ASBZPartyBeaconHost() {
    this->PartyTravelTimeout = 20.00f;
    this->PartyDisconnectTimeout = 20.00f;
}

