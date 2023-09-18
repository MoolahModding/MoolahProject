#include "SBZArmorDatabase.h"

USBZArmorDatabase::USBZArmorDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZArmorDatabase::StaticClass();
}


