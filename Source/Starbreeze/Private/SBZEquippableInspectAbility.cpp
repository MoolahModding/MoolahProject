#include "SBZEquippableInspectAbility.h"

USBZEquippableInspectAbility::USBZEquippableInspectAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->FeedbackClass = NULL;
}

void USBZEquippableInspectAbility::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


