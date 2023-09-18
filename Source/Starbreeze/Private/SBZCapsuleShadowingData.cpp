#include "SBZCapsuleShadowingData.h"

USBZCapsuleShadowingData::USBZCapsuleShadowingData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCapsuleShadowingData::StaticClass();
}


