#include "SBZEmoteAbility.h"

USBZEmoteAbility::USBZEmoteAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->FeedbackClass = NULL;
}

void USBZEmoteAbility::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


