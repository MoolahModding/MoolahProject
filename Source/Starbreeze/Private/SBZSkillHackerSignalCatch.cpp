#include "SBZSkillHackerSignalCatch.h"

USBZSkillHackerSignalCatch::USBZSkillHackerSignalCatch() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillHackerSignalCatch::StaticClass();
}


