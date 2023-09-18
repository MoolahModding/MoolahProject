#include "SBZMaskVFXData.h"

USBZMaskVFXData::USBZMaskVFXData() {
    this->VFXSlot = ESBZMaskVFXSlot::Mouth;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskVFXData::StaticClass();
}


