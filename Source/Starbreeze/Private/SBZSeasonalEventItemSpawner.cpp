#include "SBZSeasonalEventItemSpawner.h"

ASBZSeasonalEventItemSpawner::ASBZSeasonalEventItemSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->SpawnRequestData = NULL;
    this->NumberToSpawn = 1;
}


