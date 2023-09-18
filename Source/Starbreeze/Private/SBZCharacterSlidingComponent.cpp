#include "SBZCharacterSlidingComponent.h"

USBZCharacterSlidingComponent::USBZCharacterSlidingComponent() {
    this->OverrideSoundEvent = NULL;
    this->OverrideStopSoundEvent = NULL;
    this->bCanMakeNoise = false;
    this->SlidingNoiseRange = 1000.00f;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}


