#include "SBZStaticMeshHandheldEquippable.h"
#include "Components/StaticMeshComponent.h"

//ASBZStaticMeshHandheldEquippable::ASBZStaticMeshHandheldEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("Mesh"))) {
ASBZStaticMeshHandheldEquippable::ASBZStaticMeshHandheldEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = (UMeshComponent*)RootComponent;
}

UStaticMeshComponent* ASBZStaticMeshHandheldEquippable::GetStaticMeshComponent() {
    return NULL;
}


