#include "SBZLobbyBeaconHost.h"
#include "SBZLobbyBeaconClient.h"

ASBZLobbyBeaconHost::ASBZLobbyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyState = NULL;
    this->BeaconTypeName = TEXT("SBZLobbyBeaconClient");
    this->ClientBeaconActorClass = ASBZLobbyBeaconClient::StaticClass();
}


