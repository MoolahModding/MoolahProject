#include "SBZSuitPartSlot.h"

USBZSuitPartSlot::USBZSuitPartSlot() {
    this->SuitPart = 0;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitPartSlot::StaticClass();
}


