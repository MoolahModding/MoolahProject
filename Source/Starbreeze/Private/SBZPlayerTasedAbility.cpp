#include "SBZPlayerTasedAbility.h"

USBZPlayerTasedAbility::USBZPlayerTasedAbility() {
    this->OwnerCharacter = NULL;
    this->SBZPlayerCameraManager = NULL;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
}


