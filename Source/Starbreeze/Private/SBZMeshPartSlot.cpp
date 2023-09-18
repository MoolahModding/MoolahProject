#include "SBZMeshPartSlot.h"

USBZMeshPartSlot::USBZMeshPartSlot() {
    this->SpawnPriority = 1;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMeshPartSlot::StaticClass();
}


