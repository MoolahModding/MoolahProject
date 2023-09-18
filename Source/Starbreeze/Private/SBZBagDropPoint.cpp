#include "SBZBagDropPoint.h"
#include "Components/SceneComponent.h"

ASBZBagDropPoint::ASBZBagDropPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldActivateOnBeginPlay = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZBagDropPoint::EnableAsBagDropPoint() {
}

void ASBZBagDropPoint::DisableAsBagDropPoint() {
}


