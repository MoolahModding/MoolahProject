#include "SBZModularPartConfig.h"

USBZModularPartConfig::USBZModularPartConfig() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZModularPartConfig::StaticClass();
}

void USBZModularPartConfig::SetPart(const USBZModularPartDataAsset* PartAsset, int32 Index) {
}


