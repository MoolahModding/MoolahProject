#include "SBZMask.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

ASBZMask::ASBZMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaskSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mask"));
    this->MaskSkeletalMeshComponent->SetupAttachment(StrapSkeletalMeshComponent);
    this->MaskStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->MaskStaticMeshComponent->SetupAttachment(StrapSkeletalMeshComponent);
    this->StrapSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StrapSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->MaskOnMontage = NULL;
    this->bIsMaskOn = false;
    this->bIsRendered1P = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


