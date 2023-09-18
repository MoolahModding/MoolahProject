#include "SBZRandomNoiseComponent.h"

USBZRandomNoiseComponent::USBZRandomNoiseComponent() {
    this->NoiseToMake = NULL;
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
    this->bAutoActivate = true;
}

void USBZRandomNoiseComponent::MulticastForceSound_Implementation() {
}


