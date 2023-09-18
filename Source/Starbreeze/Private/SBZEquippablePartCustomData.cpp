#include "SBZEquippablePartCustomData.h"

USBZEquippablePartCustomData::USBZEquippablePartCustomData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippablePartCustomData::StaticClass();
}


