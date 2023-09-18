#include "SBZSuitBaseDatabase.h"

USBZSuitBaseDatabase::USBZSuitBaseDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitBaseDatabase::StaticClass();
}


