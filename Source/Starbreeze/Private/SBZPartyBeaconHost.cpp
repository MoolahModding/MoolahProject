#include "SBZPartyBeaconHost.h"
#include "SBZPartyBeaconClient.h"

ASBZPartyBeaconHost::ASBZPartyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartyTravelTimeout = 20.00f;
    this->PartyDisconnectTimeout = 20.00f;
    this->BeaconTypeName = TEXT("SBZPartyBeaconClient");
    this->ClientBeaconActorClass = ASBZPartyBeaconClient::StaticClass();
}

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


