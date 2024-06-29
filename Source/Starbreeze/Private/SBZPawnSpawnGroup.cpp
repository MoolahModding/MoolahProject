#include "SBZPawnSpawnGroup.h"
#include "Components/SceneComponent.h"

ASBZPawnSpawnGroup::ASBZPawnSpawnGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Seed = -1;
    this->bShouldRandomizeSpawnPoints = false;
    this->SpawnGroupRoom = NULL;
}

void ASBZPawnSpawnGroup::OnPawnSpawnDestroyed(AActor* DestroyedActor) {
}


