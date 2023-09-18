#include "SBZSkeletalDebris.h"
#include "Components/SkeletalMeshComponent.h"

ASBZSkeletalDebris::ASBZSkeletalDebris(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->RootComponent = SkeletalMeshComponent;
}


