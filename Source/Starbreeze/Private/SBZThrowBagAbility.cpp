#include "SBZThrowBagAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowBagAbility::USBZThrowBagAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ThrowBag;
}


