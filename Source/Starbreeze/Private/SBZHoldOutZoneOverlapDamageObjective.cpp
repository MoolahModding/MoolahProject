#include "SBZHoldOutZoneOverlapDamageObjective.h"

USBZHoldOutZoneOverlapDamageObjective::USBZHoldOutZoneOverlapDamageObjective() {
    this->TriggerVolumeActor = NULL;
    this->Health = 100;
}

void USBZHoldOutZoneOverlapDamageObjective::OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void USBZHoldOutZoneOverlapDamageObjective::OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}


