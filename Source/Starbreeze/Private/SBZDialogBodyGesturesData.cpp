#include "SBZDialogBodyGesturesData.h"

USBZDialogBodyGesturesData::USBZDialogBodyGesturesData() {
    this->bUpdate = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZDialogBodyGesturesData::StaticClass();
}


