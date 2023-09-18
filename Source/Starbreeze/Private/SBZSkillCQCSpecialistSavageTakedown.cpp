#include "SBZSkillCQCSpecialistSavageTakedown.h"

USBZSkillCQCSpecialistSavageTakedown::USBZSkillCQCSpecialistSavageTakedown() {
    this->ActivationDelay = 0.10f;
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillCQCSpecialistSavageTakedown::StaticClass();
}


