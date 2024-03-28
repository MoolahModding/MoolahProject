#include "SBZPawnSpawnGroup.h"

void ASBZPawnSpawnGroup::OnPawnSpawnDestroyed(AActor* DestroyedActor) {
}

ASBZPawnSpawnGroup::ASBZPawnSpawnGroup() {
    this->Seed = -1;
    this->bShouldRandomizeSpawnPoints = false;
    this->SpawnGroupRoom = NULL;
}

