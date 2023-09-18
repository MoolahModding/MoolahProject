#include "SBZAIArmedCharacterAnimationCollection.h"

USBZAIArmedCharacterAnimationCollection::USBZAIArmedCharacterAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAIArmedCharacterAnimationCollection::StaticClass();
}


