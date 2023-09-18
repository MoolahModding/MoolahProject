#include "SBZSkillGunslingerGunslinger.h"

USBZSkillGunslingerGunslinger::USBZSkillGunslingerGunslinger() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillGunslingerGunslinger::StaticClass();
}


