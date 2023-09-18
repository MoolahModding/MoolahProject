#include "SBZSkillAmmoSpecialistAmmoSpecialistAced.h"

USBZSkillAmmoSpecialistAmmoSpecialistAced::USBZSkillAmmoSpecialistAmmoSpecialistAced() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillAmmoSpecialistAmmoSpecialistAced::StaticClass();
}


