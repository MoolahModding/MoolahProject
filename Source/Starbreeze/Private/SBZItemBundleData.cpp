#include "SBZItemBundleData.h"

USBZItemBundleData::USBZItemBundleData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZItemBundleData::StaticClass();
}


