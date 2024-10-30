#include "SBZPawnSpawnPredefined.h"

ASBZPawnSpawnPredefined::ASBZPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnOnBeginPlay = false;
    this->bOverrideSpawningMethod = false;
    this->OverridenSpawningMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->bEnableRandomMeshScale = false;
    this->SpawnLootClass = NULL;
    this->PredefinedRequestActionActorRef = NULL;
}

void ASBZPawnSpawnPredefined::SpawnPredefinedMulti() {
}

void ASBZPawnSpawnPredefined::SpawnPredefinedLatent(FLatentActionInfo LatentInfo) {
}

FSBZPawnSpawnRequestHandle ASBZPawnSpawnPredefined::SpawnPredefined() {
    return FSBZPawnSpawnRequestHandle{};
}



