#include "SBZMaskMouldDatabase.h"

USBZMaskMouldDatabase::USBZMaskMouldDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskMouldDatabase::StaticClass();
}


