#include "SBZMaskData.h"

USBZMaskData::USBZMaskData() {
    this->Mould = NULL;
    this->Material = NULL;
    this->Pattern = NULL;
    this->VFX = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskData::StaticClass();
}


