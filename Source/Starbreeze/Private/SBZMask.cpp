#include "SBZMask.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

ASBZMask::ASBZMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MaskSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mask"));
    this->MaskStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StrapSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->bNeedCollisionWithCharacter = false;
    this->MaskOnMontage = NULL;
    this->bIsMaskOn = false;
    this->bIsRendered1P = false;
    this->MaskSkeletalMeshComponent->SetupAttachment(StrapSkeletalMeshComponent);
    this->MaskStaticMeshComponent->SetupAttachment(StrapSkeletalMeshComponent);
    this->StrapSkeletalMeshComponent->SetupAttachment(RootComponent);
}


