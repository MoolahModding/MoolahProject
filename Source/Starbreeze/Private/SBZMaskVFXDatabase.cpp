#include "SBZMaskVFXDatabase.h"

USBZMaskVFXDatabase::USBZMaskVFXDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskVFXDatabase::StaticClass();
}


