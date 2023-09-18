#include "SBZEquippableAnimationCollection.h"

USBZEquippableAnimationCollection::USBZEquippableAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippableAnimationCollection::StaticClass();
}


