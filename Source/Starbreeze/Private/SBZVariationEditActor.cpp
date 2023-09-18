#include "SBZVariationEditActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SBZVariationEditComponent.h"

ASBZVariationEditActor::ASBZVariationEditActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VariationComponent = CreateDefaultSubobject<USBZVariationEditComponent>(TEXT("VariationComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


