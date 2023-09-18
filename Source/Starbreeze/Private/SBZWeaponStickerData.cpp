#include "SBZWeaponStickerData.h"

USBZWeaponStickerData::USBZWeaponStickerData() {
    this->StickerTexture = NULL;
    this->StickerTextureBaseRotation = 0.00f;
    this->StickerTextureBaseSize = 1.00f;
    this->StickerMetallic = 0.00f;
    this->StickerNormalStrength = 5.00f;
    this->StickerRoughnessContrast = 0.10f;
    this->StickerRoughnessValue = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponStickerData::StaticClass();
}


