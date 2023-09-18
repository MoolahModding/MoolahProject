#include "SBZEscortPoint.h"
#include "Components/SceneComponent.h"

ASBZEscortPoint::ASBZEscortPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


