#include "SBZAnimatedInteractionAbility.h"

USBZAnimatedInteractionAbility::USBZAnimatedInteractionAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CurrentInteractionMontage = NULL;
    this->CurrentAnimatedInteractionData = NULL;
}

void USBZAnimatedInteractionAbility::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


