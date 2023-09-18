#include "SBZMaskInventorySlotDatabase.h"

USBZMaskInventorySlotDatabase::USBZMaskInventorySlotDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskInventorySlotDatabase::StaticClass();
}


