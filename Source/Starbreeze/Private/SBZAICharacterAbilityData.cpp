#include "SBZAICharacterAbilityData.h"

USBZAICharacterAbilityData::USBZAICharacterAbilityData() {
    this->ArmorHardness = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAICharacterAbilityData::StaticClass();
}


