#include "SBZActorSpawnRequestData.h"

USBZActorSpawnRequestData::USBZActorSpawnRequestData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZActorSpawnRequestData::StaticClass();
}


