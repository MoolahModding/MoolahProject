#include "SBZWeaponStickerDataConfig.h"

USBZWeaponStickerDataConfig::USBZWeaponStickerDataConfig() {
    this->StickerPositionIndex = 0;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponStickerDataConfig::StaticClass();
}


