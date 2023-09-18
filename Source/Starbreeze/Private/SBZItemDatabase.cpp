#include "SBZItemDatabase.h"

USBZItemDatabase::USBZItemDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZItemDatabase::StaticClass();
}


