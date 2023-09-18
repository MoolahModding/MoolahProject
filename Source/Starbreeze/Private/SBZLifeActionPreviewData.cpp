#include "SBZLifeActionPreviewData.h"

USBZLifeActionPreviewData::USBZLifeActionPreviewData() {
    this->SkeletalMesh = NULL;
    this->AnimationCollection = NULL;
    this->PreviewStance = ESBZCharacterStance::First;
    this->PreviewEquippableFamily = ESBZEquippableFamily::First;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZLifeActionPreviewData::StaticClass();
}


