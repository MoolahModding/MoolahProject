#include "SBZDialogAnimDataCollection.h"

USBZDialogAnimDataCollection::USBZDialogAnimDataCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZDialogAnimDataCollection::StaticClass();
}


