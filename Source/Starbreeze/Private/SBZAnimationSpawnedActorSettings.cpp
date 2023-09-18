#include "SBZAnimationSpawnedActorSettings.h"

USBZAnimationSpawnedActorSettings::USBZAnimationSpawnedActorSettings() {
    this->ActorToSpawn = NULL;
    this->ActorToSpawn = NULL;
    this->DespawnDelay = 0.00f;
    this->bDropIfInterrupted = false;
    this->DespawnDelayInterrupted = 30.00f;
    this->CompatibleStancesToDrop = -1;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAnimationSpawnedActorSettings::StaticClass();
}


