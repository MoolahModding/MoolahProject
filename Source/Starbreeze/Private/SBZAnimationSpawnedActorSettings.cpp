#include "SBZAnimationSpawnedActorSettings.h"

USBZAnimationSpawnedActorSettings::USBZAnimationSpawnedActorSettings() {
    this->ActorToSpawn = NULL;
    this->DespawnDelay = 0.00f;
    this->bDropIfInterrupted = false;
    this->DespawnDelayInterrupted = 30.00f;
    this->CompatibleStancesToDrop = -1;
}

