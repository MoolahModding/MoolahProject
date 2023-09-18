#include "SBZFlashBangGrenadeData.h"

USBZFlashBangGrenadeData::USBZFlashBangGrenadeData() {
    this->GuaranteedFlashDistance = 150.00f;
    this->MaximumAngleDifference = 90.00f;
    this->StunTime = 6.00f;
    this->PlayerFlashTime = 6.00f;
    this->FriendlyPlayerFlashTimeScale = 0.25f;
    this->FlashPlayerFalloffExponent = 1.00f;
    this->GameplayEffectClass = NULL;
    this->GameplayEffectClass = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZFlashBangGrenadeData::StaticClass();
}


