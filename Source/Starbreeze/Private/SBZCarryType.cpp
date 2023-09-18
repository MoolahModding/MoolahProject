#include "SBZCarryType.h"

USBZCarryType::USBZCarryType() {
    this->CarryIcon = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCarryType::StaticClass();
}


