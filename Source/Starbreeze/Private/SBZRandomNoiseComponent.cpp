#include "SBZRandomNoiseComponent.h"

USBZRandomNoiseComponent::USBZRandomNoiseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->NoiseToMake = NULL;
}

void USBZRandomNoiseComponent::MulticastForceSound_Implementation() {
}


