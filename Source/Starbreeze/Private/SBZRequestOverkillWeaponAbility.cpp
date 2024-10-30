#include "SBZRequestOverkillWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZRequestOverkillWeaponAbility::USBZRequestOverkillWeaponAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::RequestOverkillWeapon;
    this->OwnerCharacter = NULL;
    this->OverkillSuccessDialog = NULL;
    this->OverkillFailedDialog = NULL;
    this->OverkillStealthDialog = NULL;
}


