#include "SBZPlayerCharacterData.h"

USBZPlayerCharacterData::USBZPlayerCharacterData() {
    this->DefaultMaskData = NULL;
    this->DefaultSuitBaseData = NULL;
    this->DefaultGloveData = NULL;
    this->SizeCategory = EPlayerCharacterSizeCategory::MaleAverage;
    this->MainMenuAnimationCollection = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerCharacterData::StaticClass();
}


