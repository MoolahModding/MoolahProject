#include "SBZPlayerWeaponFireData.h"

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
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerWeaponFireData::StaticClass();
}

void USBZPlayerWeaponFireData::GetDamageOnEachDistance(float MinDistance, float MaxDistance, float DistanceStep, TArray<float>& OutDamageArray) const {
}


