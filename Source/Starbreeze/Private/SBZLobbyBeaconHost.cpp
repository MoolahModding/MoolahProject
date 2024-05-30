#include "SBZLobbyBeaconHost.h"
#include "SBZLobbyBeaconClient.h"

ASBZLobbyBeaconHost::ASBZLobbyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("SBZLobbyBeaconClient");
    this->ClientBeaconActorClass = ASBZLobbyBeaconClient::StaticClass();
    this->LobbyState = NULL;
}


