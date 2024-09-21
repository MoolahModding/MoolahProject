#include "SBZPlayerWeaponFireData.h"

USBZPlayerWeaponFireData::USBZPlayerWeaponFireData() {
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    this->DamageDistanceArray.AddDefaulted(1);
    this->TimeBetweenBurstsSeconds = 0.00f;
    this->bIsReloadEndCycledEachRound = false;
    this->AmmoLoaded = 10;
    this->AmmoLeftInChamber = 1;
    this->AmmoPerFiredRound = 1;
    this->AmmoInventoryMax = 100;
    this->AmmoInventory = 100;
    this->MuzzleData = NULL;
}

void USBZPlayerWeaponFireData::GetDamageOnEachDistance(float MinDistance, float MaxDistance, float DistanceStep, TArray<float>& OutDamageArray) const {
}


