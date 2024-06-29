#include "SBZPlayerProjectileWeaponFireData.h"

USBZPlayerProjectileWeaponFireData::USBZPlayerProjectileWeaponFireData() {
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    this->DamageDistanceArray.AddDefaulted(1);
    this->PitchAdjustment = 5.00f;
    this->SpawnOffsetFromCamera = 25.00f;
}


