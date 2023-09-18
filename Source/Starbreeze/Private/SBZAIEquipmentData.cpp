#include "SBZAIEquipmentData.h"

USBZAIEquipmentData::USBZAIEquipmentData() {
    this->ThrowableCooldown = 15.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAIEquipmentData::StaticClass();
}


