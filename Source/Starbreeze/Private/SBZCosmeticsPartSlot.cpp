#include "SBZCosmeticsPartSlot.h"

USBZCosmeticsPartSlot::USBZCosmeticsPartSlot() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCosmeticsPartSlot::StaticClass();
}


