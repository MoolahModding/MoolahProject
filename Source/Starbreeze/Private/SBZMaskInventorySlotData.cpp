#include "SBZMaskInventorySlotData.h"

USBZMaskInventorySlotData::USBZMaskInventorySlotData() {
    this->MaskMouldSlot = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskInventorySlotData::StaticClass();
}


