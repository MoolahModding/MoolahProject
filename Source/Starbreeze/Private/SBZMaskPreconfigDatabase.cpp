#include "SBZMaskPreconfigDatabase.h"

USBZMaskPreconfigDatabase::USBZMaskPreconfigDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskPreconfigDatabase::StaticClass();
}


