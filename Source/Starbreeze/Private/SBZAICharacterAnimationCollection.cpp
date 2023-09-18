#include "SBZAICharacterAnimationCollection.h"

USBZAICharacterAnimationCollection::USBZAICharacterAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAICharacterAnimationCollection::StaticClass();
}


