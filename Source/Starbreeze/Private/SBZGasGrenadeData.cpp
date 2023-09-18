#include "SBZGasGrenadeData.h"

USBZGasGrenadeData::USBZGasGrenadeData() {
    this->DropDamageModifierCurve = NULL;
    this->AttachmentBone = TEXT("LeftHandWeapon");
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGasGrenadeData::StaticClass();
}


