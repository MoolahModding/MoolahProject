#include "SBZMask.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

ASBZMask::ASBZMask() {
    this->MaskSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mask"));
    this->MaskStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StrapSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->MaskOnMontage = NULL;
    this->bIsMaskOn = false;
    this->bIsRendered1P = false;
}

