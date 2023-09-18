#include "SBZAssetLookupData.h"

USBZAssetLookupData::USBZAssetLookupData() {
    this->PhysicalMaterialIndexBitCount = 1;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAssetLookupData::StaticClass();
}


