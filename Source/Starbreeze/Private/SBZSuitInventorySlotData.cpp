#include "SBZSuitInventorySlotData.h"

USBZSuitInventorySlotData::USBZSuitInventorySlotData() {
    this->SuitBaseSlot = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitInventorySlotData::StaticClass();
}


