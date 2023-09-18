#include "SBZPlayerLoadoutAsset.h"

USBZPlayerLoadoutAsset::USBZPlayerLoadoutAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerLoadoutAsset::StaticClass();
}


