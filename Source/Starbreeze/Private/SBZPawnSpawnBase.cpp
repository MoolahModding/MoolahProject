#include "SBZPawnSpawnBase.h"
#include "Components/SceneComponent.h"

ASBZPawnSpawnBase::ASBZPawnSpawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Seed = -1;
    this->bRandomizeSpawnTransformStartingIndex = true;
    this->NextSpawnDefinitionIndex = 0;
    this->bNetLoadOnClient = false;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponentNew"));
}


