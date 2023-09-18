#include "SBZModularPartDataAsset.h"

USBZModularPartDataAsset::USBZModularPartDataAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZModularPartDataAsset::StaticClass();
}


