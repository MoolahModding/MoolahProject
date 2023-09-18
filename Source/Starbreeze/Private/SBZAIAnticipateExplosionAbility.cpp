#include "SBZAIAnticipateExplosionAbility.h"
#include "ESBZAbilityInput.h"

USBZAIAnticipateExplosionAbility::USBZAIAnticipateExplosionAbility() {
    this->DiveRange = 200.00f;
    this->DetectionSettings = NULL;
    this->ObservedGrenade = NULL;
    this->PlayedMontage = NULL;
    this->Input = ESBZAbilityInput::AnticipateExplosion;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


