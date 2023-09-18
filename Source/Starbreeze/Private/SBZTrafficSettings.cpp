#include "SBZTrafficSettings.h"

USBZTrafficSettings::USBZTrafficSettings() {
    this->VehicleSpawnInterval = 0.15f;
    this->VehicleWantedStopDistance = 150.00f;
    this->GridlockBreakCountdown = 2.50f;
    this->PedestrianGreenSoundEvent = NULL;
    this->PedestrianRedSoundEvent = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTrafficSettings::StaticClass();
}


