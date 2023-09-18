#include "SBZMaskPartConfig.h"

USBZMaskPartConfig::USBZMaskPartConfig() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskPartConfig::StaticClass();
}


