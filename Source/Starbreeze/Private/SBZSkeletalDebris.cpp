#include "SBZSkeletalDebris.h"
#include "Components/SkeletalMeshComponent.h"

ASBZSkeletalDebris::ASBZSkeletalDebris() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

