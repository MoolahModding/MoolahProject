#include "SBZSprayCanDatabase.h"

USBZSprayCanDatabase::USBZSprayCanDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSprayCanDatabase::StaticClass();
}


