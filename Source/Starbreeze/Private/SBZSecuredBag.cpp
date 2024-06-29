#include "SBZSecuredBag.h"
#include "Components/SceneComponent.h"

ASBZSecuredBag::ASBZSecuredBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}



