#include "SBZInventorySlotData.h"

USBZInventorySlotData::USBZInventorySlotData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZInventorySlotData::StaticClass();
}


