#include "SBZBaseMenuAnimationCollection.h"

USBZBaseMenuAnimationCollection::USBZBaseMenuAnimationCollection() {
    this->bUpdateCollection = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZBaseMenuAnimationCollection::StaticClass();
}


