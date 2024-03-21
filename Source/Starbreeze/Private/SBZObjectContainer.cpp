#include "SBZObjectContainer.h"

void USBZObjectContainer::Reset() {
}

bool USBZObjectContainer::RemoveAt(int32 Index) {
    return false;
}

bool USBZObjectContainer::Remove(UObject* Object) {
    return false;
}

TArray<UObject*> USBZObjectContainer::K2_GetArray() {
    return TArray<UObject*>();
}

bool USBZObjectContainer::CleanUp() {
    return false;
}

bool USBZObjectContainer::Add(UObject* Object) {
    return false;
}

USBZObjectContainer::USBZObjectContainer() {
    this->RestrictedObjectClass = UObject::StaticClass();
    this->RestrictedInterfaceType = NULL;
    this->bAllowDuplicates = false;
    this->bKeepSorted = false;
}

