#include "SBZAIFragGrenadeData.h"

USBZAIFragGrenadeData::USBZAIFragGrenadeData() {
    this->DamageModifierCurve = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAIFragGrenadeData::StaticClass();
}


