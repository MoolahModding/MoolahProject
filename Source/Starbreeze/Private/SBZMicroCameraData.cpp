#include "SBZMicroCameraData.h"

USBZMicroCameraData::USBZMicroCameraData() {
    this->SoundRangeOverloaded = 1500.00f;
    this->DefaultAutoMarkedDuration = 15.00f;
    this->MarkedOutline = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMicroCameraData::StaticClass();
}


