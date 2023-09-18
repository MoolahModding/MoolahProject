#include "SBZBeaconActionPhaseHost.h"
#include "SBZBeaconActionPhaseClient.h"

ASBZBeaconActionPhaseHost::ASBZBeaconActionPhaseHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("SBZBeaconActionPhaseClient");
    this->ClientBeaconActorClass = ASBZBeaconActionPhaseClient::StaticClass();
}

void ASBZBeaconActionPhaseHost::HandlePlayerCountChanged(APlayerState* PlayerState) {
}


