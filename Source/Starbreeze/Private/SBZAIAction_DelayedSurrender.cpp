#include "SBZAIAction_DelayedSurrender.h"

USBZAIAction_DelayedSurrender::USBZAIAction_DelayedSurrender() {
    this->MinAimDist = 150.00f;
    this->AIController = NULL;
    this->SelectedMontage = NULL;
}

void USBZAIAction_DelayedSurrender::OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USBZAIAction_DelayedSurrender::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


