#include "SBZCharacterMantlingComponent.h"

USBZCharacterMantlingComponent::USBZCharacterMantlingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideSoundEvent = NULL;
    this->FoleySoundEvent = NULL;
    this->bCanMakeNoise = false;
    this->MantlingNoiseRange = 100.00f;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}


