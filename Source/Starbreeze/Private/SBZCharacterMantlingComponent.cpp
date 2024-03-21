#include "SBZCharacterMantlingComponent.h"

USBZCharacterMantlingComponent::USBZCharacterMantlingComponent() {
    this->OverrideSoundEvent = NULL;
    this->FoleySoundEvent = NULL;
    this->bCanMakeNoise = false;
    this->MantlingNoiseRange = 100.00f;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}

