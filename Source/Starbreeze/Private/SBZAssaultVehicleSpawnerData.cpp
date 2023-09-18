#include "SBZAssaultVehicleSpawnerData.h"

USBZAssaultVehicleSpawnerData::USBZAssaultVehicleSpawnerData() {
    this->Vehicle = NULL;
    this->Vehicle = NULL;
    this->MaxNumSpawns = -1;
    this->bUseInitialSpawn = true;
    this->bInitialSpawnOnly = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAssaultVehicleSpawnerData::StaticClass();
}


