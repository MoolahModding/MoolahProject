#include "SBZOutlineAsset.h"

USBZOutlineAsset::USBZOutlineAsset() {
    this->Priority = 0;
    this->ColorIndex = 1;
    this->Distance = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZOutlineAsset::StaticClass();
}


