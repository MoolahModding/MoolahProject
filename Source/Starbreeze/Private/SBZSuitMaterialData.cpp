#include "SBZSuitMaterialData.h"

USBZSuitMaterialData::USBZSuitMaterialData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitMaterialData::StaticClass();
}


