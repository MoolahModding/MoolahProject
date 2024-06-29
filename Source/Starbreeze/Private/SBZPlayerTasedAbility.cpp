#include "SBZPlayerTasedAbility.h"

USBZPlayerTasedAbility::USBZPlayerTasedAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->OwnerCharacter = NULL;
    this->SBZPlayerCameraManager = NULL;
}


