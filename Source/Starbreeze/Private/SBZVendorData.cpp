#include "SBZVendorData.h"

USBZVendorData::USBZVendorData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZVendorData::StaticClass();
}


