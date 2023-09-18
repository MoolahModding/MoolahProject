#include "SBZPlayerMenuAnimationCollection.h"

USBZPlayerMenuAnimationCollection::USBZPlayerMenuAnimationCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerMenuAnimationCollection::StaticClass();
}


