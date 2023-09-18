#include "SBZAIPointOfInterest.h"
#include "Components/SphereComponent.h"
#include "SBZAIAttractorComponent.h"

ASBZAIPointOfInterest::ASBZAIPointOfInterest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoEnable = true;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    FProperty* p_bHidden = GetClass()->FindPropertyByName("bHidden");
    *p_bHidden->ContainerPtrToValuePtr<uint8>(this) = true;
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    FProperty* p_SphereCollision_Prior = GetClass()->FindPropertyByName("SphereCollision");
    this->RootComponent = *p_SphereCollision_Prior->ContainerPtrToValuePtr<USphereComponent*>(this);
}

void ASBZAIPointOfInterest::OnOwnerDestroyed(AActor* DestroyedActor) {
}



