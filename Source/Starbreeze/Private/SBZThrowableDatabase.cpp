#include "SBZThrowableDatabase.h"

USBZThrowableDatabase::USBZThrowableDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZThrowableDatabase::StaticClass();
}


