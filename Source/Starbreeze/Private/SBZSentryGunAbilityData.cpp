#include "SBZSentryGunAbilityData.h"

USBZSentryGunAbilityData::USBZSentryGunAbilityData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSentryGunAbilityData::StaticClass();
}


