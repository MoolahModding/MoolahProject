#include "SBZPlayerAbilityData.h"

USBZPlayerAbilityData::USBZPlayerAbilityData() {
    this->InitialMaxDownedCount = 3;
    this->InitialDownedHealth = 40.00f;
    this->InitialReviveHealth = 30.00f;
    this->InitialDefeatDownedTime = 20.00f;
    this->InitialDefeatCuffedTime = 30.00f;
    this->InitialDownedToCuffedHealth = 20.00f;
    this->InitialCriticalHealthMax = 30.00f;
    this->InitialCriticalHealthDamageScale = 0.50f;
    this->InitialDodge = -1.00f;
    this->InitialDodgeReplenishDelay = 5.00f;
    this->InitialDodgeReplenishSpeed = 6.00f;
    this->InitialArmorReplenishDelay = 5.00f;
    this->InitialArmorChunk = 100.00f;
    this->InitialArmorHardness = 1.00f;
    this->InitialArmorChunkCount = 0;
    this->InitialArmorDamageScale = 0.50f;
    this->InitialArmorTraumaScale = 0.25f;
    this->InitialLoadoutWeight = 0.00f;
    this->InitialWeightTierOffset = 0.00f;
    this->InitialMaxRuntimeCount = 0;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerAbilityData::StaticClass();
}


