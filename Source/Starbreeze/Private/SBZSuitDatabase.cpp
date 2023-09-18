#include "SBZSuitDatabase.h"

USBZSuitDatabase::USBZSuitDatabase() {
    this->CustomizableSuit = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitDatabase::StaticClass();
}


