#include "SBZCharacterEffectDataAsset.h"

USBZCharacterEffectDataAsset::USBZCharacterEffectDataAsset() {
    this->CharacterEffectIcon = NULL;
    this->OnDisplayAudioEvent = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCharacterEffectDataAsset::StaticClass();
}


