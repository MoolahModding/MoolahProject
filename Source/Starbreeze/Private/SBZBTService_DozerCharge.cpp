#include "SBZBTService_DozerCharge.h"

void USBZBTService_DozerCharge::TickChargeMeleeCheck() {
}

void USBZBTService_DozerCharge::OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted) {
}

USBZBTService_DozerCharge::USBZBTService_DozerCharge() {
    this->ExtraChargeDistance = 100.00f;
    this->CheckForHitTickRate = 0.30f;
    this->ChargeComment = NULL;
    this->HurtReactionWeightOnAI = 3.00f;
    this->AIController = NULL;
    this->CurrentMontage = NULL;
}

