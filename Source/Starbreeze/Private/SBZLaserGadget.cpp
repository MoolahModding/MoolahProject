#include "SBZLaserGadget.h"
#include "Components/StaticMeshComponent.h"

ASBZLaserGadget::ASBZLaserGadget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}


