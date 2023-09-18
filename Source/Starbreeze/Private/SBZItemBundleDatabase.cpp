#include "SBZItemBundleDatabase.h"

USBZItemBundleDatabase::USBZItemBundleDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZItemBundleDatabase::StaticClass();
}


