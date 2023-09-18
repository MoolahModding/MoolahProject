#include "SBZHandCuffAnimationCollection.h"

USBZHandCuffAnimationCollection::USBZHandCuffAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZHandCuffAnimationCollection::StaticClass();
}


