#include "SBZGloveInventorySlotDatabase.h"

USBZGloveInventorySlotDatabase::USBZGloveInventorySlotDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGloveInventorySlotDatabase::StaticClass();
}


