#include "SBZReloadRangedWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZReloadRangedWeaponAbility::USBZReloadRangedWeaponAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::Reload;
    this->Character = NULL;
}


