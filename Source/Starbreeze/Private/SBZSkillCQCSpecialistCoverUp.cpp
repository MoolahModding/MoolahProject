#include "SBZSkillCQCSpecialistCoverUp.h"

USBZSkillCQCSpecialistCoverUp::USBZSkillCQCSpecialistCoverUp() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillCQCSpecialistCoverUp::StaticClass();
}


