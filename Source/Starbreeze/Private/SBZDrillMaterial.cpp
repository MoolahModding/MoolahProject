#include "SBZDrillMaterial.h"

USBZDrillMaterial::USBZDrillMaterial() {
    this->MinimumProgress = 10.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZDrillMaterial::StaticClass();
}


