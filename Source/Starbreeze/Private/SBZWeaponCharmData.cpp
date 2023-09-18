#include "SBZWeaponCharmData.h"

USBZWeaponCharmData::USBZWeaponCharmData() {
    this->AttachmentBoneName = TEXT("Charm");
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponCharmData::StaticClass();
}


