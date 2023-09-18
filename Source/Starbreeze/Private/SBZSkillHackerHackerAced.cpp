#include "SBZSkillHackerHackerAced.h"

USBZSkillHackerHackerAced::USBZSkillHackerHackerAced() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillHackerHackerAced::StaticClass();
}


