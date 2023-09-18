#include "SBZPingCallAsset.h"

USBZPingCallAsset::USBZPingCallAsset() {
    this->CallIcon = NULL;
    this->CallComment = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPingCallAsset::StaticClass();
}


