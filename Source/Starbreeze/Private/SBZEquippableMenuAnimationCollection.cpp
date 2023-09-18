#include "SBZEquippableMenuAnimationCollection.h"

USBZEquippableMenuAnimationCollection::USBZEquippableMenuAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippableMenuAnimationCollection::StaticClass();
}


