#include "SBZWeaponPartSlot.h"
#include "SBZModularPartApplierOverrideMat.h"

USBZWeaponPartSlot::USBZWeaponPartSlot() {
    this->ApplierClass = USBZModularPartApplierOverrideMat::StaticClass();
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPartSlot::StaticClass();
}


