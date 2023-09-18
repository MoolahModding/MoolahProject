#include "SBZVendorDatabase.h"

USBZVendorDatabase::USBZVendorDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZVendorDatabase::StaticClass();
}


