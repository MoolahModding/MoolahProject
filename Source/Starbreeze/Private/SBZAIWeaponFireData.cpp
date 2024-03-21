#include "SBZAIWeaponFireData.h"

USBZAIWeaponFireData::USBZAIWeaponFireData() {
    this->DamageModifierCurve = NULL;
    this->AccuracyModifierCurve = NULL;
    this->PreferredTimeToFire = 1.00f;
    this->BurtsSelectionCurve = NULL;
    this->BurstRandomization = 0.50f;
    this->PreferredRange = 0;
    this->bDamageAccuracyModified = true;
    this->bSliceProjectiles = true;
}

