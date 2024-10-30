#include "SBZThrowBagAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowBagAbility::USBZThrowBagAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ThrowBag;
    this->bIsClientCalculated = true;
    this->VelocityModifier = 1.00f;
    this->BackwardVelocityReduction = 1.00f;
    this->UpwardForce = 150.00f;
}


