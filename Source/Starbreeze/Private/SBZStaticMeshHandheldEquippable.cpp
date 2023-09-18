#include "SBZStaticMeshHandheldEquippable.h"
#include "Components/StaticMeshComponent.h"

ASBZStaticMeshHandheldEquippable::ASBZStaticMeshHandheldEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("Mesh"))) {
    this->RootComponent = Mesh;
}

UStaticMeshComponent* ASBZStaticMeshHandheldEquippable::GetStaticMeshComponent() {
    return NULL;
}


