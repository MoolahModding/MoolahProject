#include "SBZSpawnNotifyOnce.h"

ASBZSpawnNotifyOnce::ASBZSpawnNotifyOnce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spawner = NULL;
    this->bNetLoadOnClient = false;
}

void ASBZSpawnNotifyOnce::OnSpawnComplete(APawn* SpawnedPawn) {
}


