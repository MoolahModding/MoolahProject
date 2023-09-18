#include "SBZSkillAmmoSpecialistAmmoSpecialist.h"

USBZSkillAmmoSpecialistAmmoSpecialist::USBZSkillAmmoSpecialistAmmoSpecialist() {
    this->FloatArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillAmmoSpecialistAmmoSpecialist::StaticClass();
}


