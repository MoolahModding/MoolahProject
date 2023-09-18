#include "SBZPlayerProjectileWeaponFireData.h"

USBZPlayerProjectileWeaponFireData::USBZPlayerProjectileWeaponFireData() {
    this->PitchAdjustment = 5.00f;
    this->SpawnOffsetFromCamera = 25.00f;
    this->DamageDistanceArray.AddDefaulted(1);
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerProjectileWeaponFireData::StaticClass();
}


