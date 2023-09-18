#include "SBZGrenadeDetectionSettings.h"

USBZGrenadeDetectionSettings::USBZGrenadeDetectionSettings() {
    this->MinDelayBeforeExplode = 2.00f;
    this->DetectionRange = 500.00f;
    this->GrenadeTypeFlags = -1;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGrenadeDetectionSettings::StaticClass();
}


