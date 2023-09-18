#include "SBZSkillHackerSecureLoop.h"

USBZSkillHackerSecureLoop::USBZSkillHackerSecureLoop() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillHackerSecureLoop::StaticClass();
}


