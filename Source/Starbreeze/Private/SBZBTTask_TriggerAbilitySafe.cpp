#include "SBZBTTask_TriggerAbilitySafe.h"

USBZBTTask_TriggerAbilitySafe::USBZBTTask_TriggerAbilitySafe() {
    this->AbilityInput = ESBZAbilityInput::None;
    this->bCancelOnFinish = true;
    this->TimeToHoldInput = 1.00f;
    this->bShouldWaitForAbility = false;
}


