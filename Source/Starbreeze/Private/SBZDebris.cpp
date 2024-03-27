#include "SBZDebris.h"
#include "Components/StaticMeshComponent.h"

ASBZDebris::ASBZDebris() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
}

