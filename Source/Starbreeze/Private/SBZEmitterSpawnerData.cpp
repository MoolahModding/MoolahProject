#include "SBZEmitterSpawnerData.h"

USBZEmitterSpawnerData::USBZEmitterSpawnerData() {
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->AutoDestroy = true;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->AutoActivate = true;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEmitterSpawnerData::StaticClass();
}


