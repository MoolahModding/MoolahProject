#include "SBZVoiceCommentDataAsset.h"

USBZVoiceCommentDataAsset::USBZVoiceCommentDataAsset() {
    this->VoiceEvent = ESBZVoiceEvent::CharacterEvent;
    this->CoolDown = 0.00f;
    this->Chance = 1.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZVoiceCommentDataAsset::StaticClass();
}


