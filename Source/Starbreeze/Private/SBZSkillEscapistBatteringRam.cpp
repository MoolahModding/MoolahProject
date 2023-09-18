#include "SBZSkillEscapistBatteringRam.h"

USBZSkillEscapistBatteringRam::USBZSkillEscapistBatteringRam() {
    this->RequiredBuffTypeArray.AddDefaulted(3);
    this->bIsAnyRequiredBuffTypeEnough = true;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEscapistBatteringRam::StaticClass();
}


