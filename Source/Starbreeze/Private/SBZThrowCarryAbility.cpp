#include "SBZThrowCarryAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowCarryAbility::USBZThrowCarryAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ThrowBag;
}


