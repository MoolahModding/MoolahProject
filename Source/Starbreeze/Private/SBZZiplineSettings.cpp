#include "SBZZiplineSettings.h"

USBZZiplineSettings::USBZZiplineSettings() {
    this->MaxAcceleration = 16000.00f;
    this->CancelLaunchForce = 500.00f;
    this->BagZiplineSpeed = 500.00f;
    this->ForcedDirectionThreshold = 0.20f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZZiplineSettings::StaticClass();
}


