#include "SBZCharacterAbilityData.h"

USBZCharacterAbilityData::USBZCharacterAbilityData() {
    this->InitialHealth = 100.00f;
    this->InitialArmor = 10.00f;
    this->InitialArmorHurtReactionWeightReduction = 0;
    this->InitialDealtDamageMultiplier = 1.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCharacterAbilityData::StaticClass();
}


