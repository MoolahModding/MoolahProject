#include "SBZSuitMaterialDatabase.h"

USBZSuitMaterialDatabase::USBZSuitMaterialDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitMaterialDatabase::StaticClass();
}


