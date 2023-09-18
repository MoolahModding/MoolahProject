#include "SBZSkillMowerSprintLoaded.h"

USBZSkillMowerSprintLoaded::USBZSkillMowerSprintLoaded() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillMowerSprintLoaded::StaticClass();
}


