#include "SBZWeaponGlobalPaintSlot.h"

USBZWeaponGlobalPaintSlot::USBZWeaponGlobalPaintSlot() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponGlobalPaintSlot::StaticClass();
}


