#include "AkSpotReflector.h"
#include "Components/SceneComponent.h"

AAkSpotReflector::AAkSpotReflector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpotReclectorRootComponent"));
    this->EarlyReflectionAuxBus = NULL;
    this->AcousticTexture = NULL;
    this->DistanceScalingFactor = 2.00f;
    this->Level = 1.00f;
}


