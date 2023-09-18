#include "SBZSkillTacticianExpose.h"

USBZSkillTacticianExpose::USBZSkillTacticianExpose() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTacticianExpose::StaticClass();
}


