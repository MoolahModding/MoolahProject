#include "SBZRequestOverkillWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZRequestOverkillWeaponAbility::USBZRequestOverkillWeaponAbility() {
    this->OwnerCharacter = NULL;
    this->OverkillSuccessDialog = NULL;
    this->OverkillFailedDialog = NULL;
    this->Input = ESBZAbilityInput::RequestOverkillWeapon;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


