#include "SBZPawnSpawnPredefined.h"

void ASBZPawnSpawnPredefined::SpawnPredefinedLatent(FLatentActionInfo LatentInfo) {
}

FSBZPawnSpawnRequestHandle ASBZPawnSpawnPredefined::SpawnPredefined() {
    return FSBZPawnSpawnRequestHandle{};
}

void ASBZPawnSpawnPredefined::OnSpawnedPawnKilled(APawn* Pawn) {
}

ASBZPawnSpawnPredefined::ASBZPawnSpawnPredefined() {
    this->bSpawnOnBeginPlay = false;
    this->bOverrideSpawningMethod = false;
    this->OverridenSpawningMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->bEnableRandomMeshScale = false;
    this->PredefinedRequestActionActorRef = NULL;
}

