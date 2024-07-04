#include "SBZHoldOutZoneOverlapObjective.h"

USBZHoldOutZoneOverlapObjective::USBZHoldOutZoneOverlapObjective() {
    this->TriggerVolumeActor = NULL;
    this->bUsePlayerCount = false;
    this->NumActorToOverlap = 1;
}

void USBZHoldOutZoneOverlapObjective::OnPlayersAliveCountChanged(const TArray<UObject*>& Players) {
}

void USBZHoldOutZoneOverlapObjective::OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void USBZHoldOutZoneOverlapObjective::OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}


