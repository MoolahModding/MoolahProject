#include "SBZPreplanningAssetData.h"

USBZPreplanningAssetData::USBZPreplanningAssetData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPreplanningAssetData::StaticClass();
}

void USBZPreplanningAssetData::ApplyPreplanningAsset(UObject* WorldContextObject) const {
}


