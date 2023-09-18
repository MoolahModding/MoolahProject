#include "SBZInventorySlotDatabase.h"

USBZInventorySlotDatabase::USBZInventorySlotDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZInventorySlotDatabase::StaticClass();
}


