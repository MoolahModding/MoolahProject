#include "SBZTagReactionAsset.h"

USBZTagReactionAsset::USBZTagReactionAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTagReactionAsset::StaticClass();
}


