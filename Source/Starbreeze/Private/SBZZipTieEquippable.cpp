#include "SBZZipTieEquippable.h"
#include "Components/StaticMeshComponent.h"

ASBZZipTieEquippable::ASBZZipTieEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("Mesh"))) {
    this->Mesh = (UMeshComponent*)RootComponent;
    this->BrokenMesh = NULL;
}


