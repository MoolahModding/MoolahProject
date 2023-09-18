#include "SBZArmorData.h"

USBZArmorData::USBZArmorData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZArmorData::StaticClass();
}


