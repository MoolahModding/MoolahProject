#include "SBZPlayerCharacterDatabase.h"

USBZPlayerCharacterDatabase::USBZPlayerCharacterDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerCharacterDatabase::StaticClass();
}


