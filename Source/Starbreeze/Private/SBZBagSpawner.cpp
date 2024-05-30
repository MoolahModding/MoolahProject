#include "SBZBagSpawner.h"
#include "Components/SceneComponent.h"

ASBZBagSpawner::ASBZBagSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->NumberOfBags = 1;
    this->DelayBetweenSpawns = 2.00f;
    this->BagTypeToSpawn = NULL;
    this->bShouldLaunchBag = false;
    this->LaunchSpeed = 500.00f;
    this->bShouldLaunchWithinCone = false;
    this->ConeAngle = 0.00f;
}

void ASBZBagSpawner::StartSpawningBags() {
}


