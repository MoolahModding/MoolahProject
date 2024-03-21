#include "SBZPlayerWeaponFireData.h"

void USBZPlayerWeaponFireData::GetDamageOnEachDistance(float MinDistance, float MaxDistance, float DistanceStep, TArray<float>& OutDamageArray) const {
}

USBZPlayerWeaponFireData::USBZPlayerWeaponFireData() {
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

