#include "SBZWeaponStickerSlot.h"

USBZWeaponStickerSlot::USBZWeaponStickerSlot() {
    this->StickerPositionIndex = 0;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponStickerSlot::StaticClass();
}


