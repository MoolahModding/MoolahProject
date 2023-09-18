#include "SBZWeaponAimAssistData.h"

FSBZWeaponAimAssistData::FSBZWeaponAimAssistData() {
    this->DetectionSideDistance = 0.00f;
    this->DetectionDistancePriority = 0.00f;
    this->MinTargetSelectionDuration = 0.00f;
    this->MinDuration = 0.00f;
    this->MaxDuration = 0.00f;
    this->bIsTriggeredByWeaponFire = false;
    this->StickyAimDurationOnWeaponFire = 0.00f;
    this->EscapeSpeedIn = 0.00f;
    this->EscapeSpeedOut = 0.00f;
    this->AimAssistSpeed = 0.00f;
    this->MinDistance = 0.00f;
    this->SensitivityModifier = 0.00f;
    this->bUseAllSockets = false;
}

