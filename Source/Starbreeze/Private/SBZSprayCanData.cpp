#include "SBZSprayCanData.h"

USBZSprayCanData::USBZSprayCanData() {
    this->SprayCanTexture = NULL;
    this->SprayCanTextureRotation = 0.00f;
    this->SprayCanTextureSize = 10.00f;
    this->SprayCanRoughness = 0.10f;
    this->SprayCanRoughnessTexture = NULL;
    this->SprayCanMetallic = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSprayCanData::StaticClass();
}


