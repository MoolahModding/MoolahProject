#include "SBZReloadRangedWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZReloadRangedWeaponAbility::USBZReloadRangedWeaponAbility() {
    this->Character = NULL;
    this->Input = ESBZAbilityInput::Reload;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


