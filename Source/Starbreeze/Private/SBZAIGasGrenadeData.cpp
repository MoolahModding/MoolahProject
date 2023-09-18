#include "SBZAIGasGrenadeData.h"

USBZAIGasGrenadeData::USBZAIGasGrenadeData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAIGasGrenadeData::StaticClass();
}


