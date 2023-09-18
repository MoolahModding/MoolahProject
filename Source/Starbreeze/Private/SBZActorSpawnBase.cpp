#include "SBZActorSpawnBase.h"
#include "Components/SceneComponent.h"

ASBZActorSpawnBase::ASBZActorSpawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Seed = -1;
    this->bRandomizeSpawnTransformStartingIndex = true;
    this->NextSpawnTransformIndex = 0;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


