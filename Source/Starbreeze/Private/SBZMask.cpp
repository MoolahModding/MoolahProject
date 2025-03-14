#include "SBZMask.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ASBZMask::ASBZMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MaskSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mask"));
    this->StrapSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->bNeedCollisionWithCharacter = false;
    this->MaskOnMontage = NULL;
    this->bIsMaskOn = false;
    this->bIsRendered1P = false;
    this->MaskSkeletalMeshComponent->SetupAttachment(StrapSkeletalMeshComponent);
    this->StrapSkeletalMeshComponent->SetupAttachment(RootComponent);
}


