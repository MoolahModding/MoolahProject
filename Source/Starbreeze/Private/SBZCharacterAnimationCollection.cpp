#include "SBZCharacterAnimationCollection.h"

USBZCharacterAnimationCollection::USBZCharacterAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCharacterAnimationCollection::StaticClass();
}


