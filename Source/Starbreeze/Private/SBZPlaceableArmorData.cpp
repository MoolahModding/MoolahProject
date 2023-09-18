#include "SBZPlaceableArmorData.h"

USBZPlaceableArmorData::USBZPlaceableArmorData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableArmorData::StaticClass();
}


