#include "SBZThrowCarryAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowCarryAbility::USBZThrowCarryAbility() {
    this->Input = ESBZAbilityInput::ThrowBag;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


