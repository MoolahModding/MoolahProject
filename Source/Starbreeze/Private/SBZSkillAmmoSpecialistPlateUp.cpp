#include "SBZSkillAmmoSpecialistPlateUp.h"

USBZSkillAmmoSpecialistPlateUp::USBZSkillAmmoSpecialistPlateUp() {
    this->RequiredBuffTypeArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(2);
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillAmmoSpecialistPlateUp::StaticClass();
}


