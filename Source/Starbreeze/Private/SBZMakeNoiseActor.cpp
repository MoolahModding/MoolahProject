#include "SBZMakeNoiseActor.h"
#include "Components/SceneComponent.h"

ASBZMakeNoiseActor::ASBZMakeNoiseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


