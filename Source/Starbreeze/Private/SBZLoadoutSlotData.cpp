#include "SBZLoadoutSlotData.h"

USBZLoadoutSlotData::USBZLoadoutSlotData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZLoadoutSlotData::StaticClass();
}


