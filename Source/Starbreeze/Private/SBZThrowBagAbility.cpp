#include "SBZThrowBagAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowBagAbility::USBZThrowBagAbility() {
    this->Input = ESBZAbilityInput::ThrowBag;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


