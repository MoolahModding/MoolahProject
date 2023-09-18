#include "SBZPayDayCreditDatabase.h"

USBZPayDayCreditDatabase::USBZPayDayCreditDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPayDayCreditDatabase::StaticClass();
}


