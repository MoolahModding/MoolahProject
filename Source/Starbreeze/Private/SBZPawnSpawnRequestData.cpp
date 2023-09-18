#include "SBZPawnSpawnRequestData.h"

USBZPawnSpawnRequestData::USBZPawnSpawnRequestData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPawnSpawnRequestData::StaticClass();
}


