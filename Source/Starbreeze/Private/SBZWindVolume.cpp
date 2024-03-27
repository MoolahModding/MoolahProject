#include "SBZWindVolume.h"
#include "SBZWindEmitterComponent.h"

ASBZWindVolume::ASBZWindVolume() {
    this->EmitterComponent = CreateDefaultSubobject<USBZWindEmitterComponent>(TEXT("SBZWindEmitterComponent"));
}

