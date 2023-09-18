#include "SBZPawnSpawnPredefined.h"

ASBZPawnSpawnPredefined::ASBZPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnOnBeginPlay = false;
    this->bOverrideSpawningMethod = false;
    this->OverridenSpawningMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->bEnableRandomMeshScale = false;
    this->PredefinedRequestActionActorRef = NULL;
}

void ASBZPawnSpawnPredefined::SpawnPredefinedLatent(FLatentActionInfo LatentInfo) {
}

FSBZPawnSpawnRequestHandle ASBZPawnSpawnPredefined::SpawnPredefined() {
    return FSBZPawnSpawnRequestHandle{};
}

void ASBZPawnSpawnPredefined::OnSpawnedPawnKilled(APawn* Pawn) {
}


