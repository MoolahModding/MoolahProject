#include "SBZFireRangedWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZFireRangedWeaponAbility::USBZFireRangedWeaponAbility() {
    this->Pawn = NULL;
    this->bCancelAbilitiesOnFailedActivation = true;
    this->Input = ESBZAbilityInput::Fire;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


