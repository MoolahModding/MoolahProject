#include "SBZAnimatedInteractionAbility.h"

void USBZAnimatedInteractionAbility::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

USBZAnimatedInteractionAbility::USBZAnimatedInteractionAbility() {
    this->CurrentInteractionMontage = NULL;
    this->CurrentAnimatedInteractionData = NULL;
}

