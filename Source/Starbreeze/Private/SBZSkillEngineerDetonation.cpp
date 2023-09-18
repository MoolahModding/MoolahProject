#include "SBZSkillEngineerDetonation.h"

USBZSkillEngineerDetonation::USBZSkillEngineerDetonation() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEngineerDetonation::StaticClass();
}


