#include "SBZLaserGadget.h"
#include "Components/StaticMeshComponent.h"

ASBZLaserGadget::ASBZLaserGadget() {
    this->LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

