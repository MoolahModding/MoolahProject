#include "SBZRandomizedRoom.h"
#include "Components/SceneComponent.h"

ASBZRandomizedRoom::ASBZRandomizedRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ReloadAfterSave = true;
}


