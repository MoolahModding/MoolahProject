#include "SBZVariationSetData.h"

USBZVariationSetData::USBZVariationSetData() {
    this->Mesh = NULL;
    this->SkeletalMesh = NULL;
    this->StaticMesh = NULL;
    this->CDPFormat = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZVariationSetData::StaticClass();
}


