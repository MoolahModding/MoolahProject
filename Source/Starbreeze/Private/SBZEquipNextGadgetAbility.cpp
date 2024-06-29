#include "SBZEquipNextGadgetAbility.h"
#include "ESBZAbilityInput.h"

USBZEquipNextGadgetAbility::USBZEquipNextGadgetAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::EquipNextGadget;
}


