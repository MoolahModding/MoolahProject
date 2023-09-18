#include "SBZMaskDatabase.h"

USBZMaskDatabase::USBZMaskDatabase() {
    this->CustomizableMask = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskDatabase::StaticClass();
}


