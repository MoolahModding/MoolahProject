#include "SBZEquippablePartConfig.h"

USBZEquippablePartConfig::USBZEquippablePartConfig() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippablePartConfig::StaticClass();
}


