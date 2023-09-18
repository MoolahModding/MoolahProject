#include "SBZSkillEngineerTargetedFire.h"

USBZSkillEngineerTargetedFire::USBZSkillEngineerTargetedFire() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEngineerTargetedFire::StaticClass();
}


