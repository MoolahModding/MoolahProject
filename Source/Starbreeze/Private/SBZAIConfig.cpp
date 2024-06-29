#include "SBZAIConfig.h"

USBZAIConfig::USBZAIConfig() {
    this->bTimeSliceDecidersLoop = true;
    this->DecidersLoopTimeSlicingBudget = 0.00f;
    this->DeployableCooldown = 120.00f;
    this->DeployableIgnoreTime = 180.00f;
    this->DeployableConsumedTime = 20.00f;
    this->FriendlyFireRadius = 50.00f;
    this->StealthMarkingRange = 1000.00f;
    this->LowHealthConsideration = 0.40f;
    this->LowArmorConsideration = 0.60f;
    this->LowAmmoConsideration = 0.25f;
    this->MaxDeployablesAllowed[0] = -1;
    this->MaxDeployablesAllowed[1] = -1;
    this->MaxDeployablesAllowed[2] = -1;
    this->MaxDeployablesAllowed[3] = -1;
    this->TauntTimeFiredThreshold[0] = 8.00f;
    this->TauntTimeFiredThreshold[1] = 8.00f;
    this->TauntTimeFiredThreshold[2] = 8.00f;
    this->TauntTimeFiredThreshold[3] = 8.00f;
    this->MeleeFireTimeAddition = 1.00f;
    this->PreferredHidingRange = 3000.00f;
    this->GlitchEffectRange = 3000.00f;
    this->SurrenderGracePeriod = 1.50f;
    this->GoDownDistanceDelayRange = 1000.00f;
    this->EscortCircleSize = 300.00f;
}

TArray<FSBZCoverShootingPoints> USBZAIConfig::GetShootingPoints() const {
    return TArray<FSBZCoverShootingPoints>();
}

USBZAIConfig* USBZAIConfig::Get() {
    return NULL;
}


