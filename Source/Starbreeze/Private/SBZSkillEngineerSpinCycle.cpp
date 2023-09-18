#include "SBZSkillEngineerSpinCycle.h"

USBZSkillEngineerSpinCycle::USBZSkillEngineerSpinCycle() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEngineerSpinCycle::StaticClass();
}


