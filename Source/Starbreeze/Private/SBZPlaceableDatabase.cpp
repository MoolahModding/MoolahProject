#include "SBZPlaceableDatabase.h"

USBZPlaceableDatabase::USBZPlaceableDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableDatabase::StaticClass();
}


