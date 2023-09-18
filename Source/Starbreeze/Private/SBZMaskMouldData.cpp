#include "SBZMaskMouldData.h"

USBZMaskMouldData::USBZMaskMouldData() {
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskMouldData::StaticClass();
}


