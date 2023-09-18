#include "SBZSuitData.h"

USBZSuitData::USBZSuitData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitData::StaticClass();
}


