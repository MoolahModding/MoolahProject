#include "SBZSuitInventorySlotDatabase.h"

USBZSuitInventorySlotDatabase::USBZSuitInventorySlotDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitInventorySlotDatabase::StaticClass();
}


