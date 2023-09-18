#include "SBZAICrewCharacterAnimationCollection.h"

USBZAICrewCharacterAnimationCollection::USBZAICrewCharacterAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAICrewCharacterAnimationCollection::StaticClass();
}


