#include "SBZFacialAnimationCollection.h"

USBZFacialAnimationCollection::USBZFacialAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZFacialAnimationCollection::StaticClass();
}


