#include "SBZToolSnapData.h"

USBZToolSnapData::USBZToolSnapData() {
    this->ZAxisOffset = 0.00f;
    this->ToolSnapOffset = 10.00f;
    this->ToolSnapRadius = 75.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZToolSnapData::StaticClass();
}


