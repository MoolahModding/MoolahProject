#include "SBZSentryGunFireData.h"

USBZSentryGunFireData::USBZSentryGunFireData() {
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    this->OverheatEffectClass = NULL;
}


