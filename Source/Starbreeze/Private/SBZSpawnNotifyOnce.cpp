#include "SBZSpawnNotifyOnce.h"

ASBZSpawnNotifyOnce::ASBZSpawnNotifyOnce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->Spawner = NULL;
}

void ASBZSpawnNotifyOnce::OnSpawnComplete(APawn* SpawnedPawn, ASBZCarriedStaticInteractionActor* SpawnedLoot) {
}


