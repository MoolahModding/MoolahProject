#include "SBZBagDropPoint.h"
#include "Components/SceneComponent.h"

ASBZBagDropPoint::ASBZBagDropPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bShouldActivateOnBeginPlay = true;
}

void ASBZBagDropPoint::EnableAsBagDropPoint() {
}

void ASBZBagDropPoint::DisableAsBagDropPoint() {
}


