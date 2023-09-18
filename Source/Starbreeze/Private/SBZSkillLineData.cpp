#include "SBZSkillLineData.h"

USBZSkillLineData::USBZSkillLineData() {
    this->ResearchLevel = 1000.00f;
    this->BaseSkill = NULL;
    this->AcedBaseSkill = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillLineData::StaticClass();
}


