#include "SBZStanceTransitionDataAsset.h"

USBZStanceTransitionDataAsset::USBZStanceTransitionDataAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZStanceTransitionDataAsset::StaticClass();
}


