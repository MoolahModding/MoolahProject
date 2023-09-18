#include "SBZEquippableGadgetData.h"

USBZEquippableGadgetData::USBZEquippableGadgetData() {
    this->GadgetClass = NULL;
    this->GadgetClass = NULL;
    this->SpawnSocket = TEXT("Gadget");
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEquippableGadgetData::StaticClass();
}


