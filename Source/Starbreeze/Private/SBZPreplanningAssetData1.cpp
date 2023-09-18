#include "SBZPreplanningAssetData1.h"

USBZPreplanningAssetData1::USBZPreplanningAssetData1() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPreplanningAssetData1::StaticClass();
}


