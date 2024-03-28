#include "SBZVariationEditActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SBZVariationEditComponent.h"

ASBZVariationEditActor::ASBZVariationEditActor() {
    this->VariationComponent = CreateDefaultSubobject<USBZVariationEditComponent>(TEXT("VariationComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

