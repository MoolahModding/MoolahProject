#include "SBZVOImportBindings.h"

USBZVOImportBindings::USBZVOImportBindings() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZVOImportBindings::StaticClass();
}


