#include "SBZSurfaceTypesConfig.h"

USBZSurfaceTypesConfig::USBZSurfaceTypesConfig() {
    this->BloodSplatterDecalAmount = 20;
    this->BloodSplatterDistance = 200.00f;
    this->BloodSplatterDecalFadeOutDuration = 0.50f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSurfaceTypesConfig::StaticClass();
}


