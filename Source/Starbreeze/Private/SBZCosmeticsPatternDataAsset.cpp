#include "SBZCosmeticsPatternDataAsset.h"

USBZCosmeticsPatternDataAsset::USBZCosmeticsPatternDataAsset() {
    this->PatternTexture = NULL;
    this->PatternNormal = NULL;
    this->ActiveChannelCount = 4;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCosmeticsPatternDataAsset::StaticClass();
}


