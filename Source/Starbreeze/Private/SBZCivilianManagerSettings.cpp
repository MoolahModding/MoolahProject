#include "SBZCivilianManagerSettings.h"

USBZCivilianManagerSettings::USBZCivilianManagerSettings() {
    this->TickInterval = 2.00f;
    this->MaxAliveCivilians = 70;
    this->SpawnUntilState = EPD3HeistState::Stealth;
    this->PercentOfCiviliansStaying = 20;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCivilianManagerSettings::StaticClass();
}


