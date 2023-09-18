#include "SBZEquipNextGadgetAbility.h"
#include "ESBZAbilityInput.h"

USBZEquipNextGadgetAbility::USBZEquipNextGadgetAbility() {
    this->Input = ESBZAbilityInput::EquipNextGadget;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


