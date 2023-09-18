#include "SBZGloveInventorySlotData.h"

USBZGloveInventorySlotData::USBZGloveInventorySlotData() {
    this->GloveBaseSlot = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGloveInventorySlotData::StaticClass();
}


