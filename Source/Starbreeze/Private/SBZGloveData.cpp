#include "SBZGloveData.h"

USBZGloveData::USBZGloveData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGloveData::StaticClass();
}


