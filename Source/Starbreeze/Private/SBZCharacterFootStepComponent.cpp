#include "SBZCharacterFootStepComponent.h"

USBZCharacterFootStepComponent::USBZCharacterFootStepComponent() {
    this->OverrideSoundEvent = NULL;
    this->FootStepRtpc = NULL;
    this->NormalStepDistance = 150.00f;
    this->CrouchStepDistance = 125.00f;
    this->RunStepDistance = 175.00f;
    this->TargetingStepDistance = 100.00f;
    this->bUseFootContactNotifies = false;
    this->InterpolationTimeMSFootstep = 0.00f;
    this->bCanMakeNoise = false;
    this->NormalNoiseRange = 500.00f;
    this->CrouchNoiseRange = 100.00f;
    this->RunNoiseRange = 1000.00f;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}


