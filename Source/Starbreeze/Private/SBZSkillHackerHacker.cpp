#include "SBZSkillHackerHacker.h"

USBZSkillHackerHacker::USBZSkillHackerHacker() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillHackerHacker::StaticClass();
}


