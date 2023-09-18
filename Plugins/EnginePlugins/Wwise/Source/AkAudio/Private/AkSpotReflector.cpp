#include "AkSpotReflector.h"
#include "Components/SceneComponent.h"

AAkSpotReflector::AAkSpotReflector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EarlyReflectionAuxBus = NULL;
    this->AcousticTexture = NULL;
    this->DistanceScalingFactor = 2.00f;
    this->Level = 1.00f;
    FProperty* p_bHidden = GetClass()->FindPropertyByName("bHidden");
    *p_bHidden->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpotReclectorRootComponent"));
}


