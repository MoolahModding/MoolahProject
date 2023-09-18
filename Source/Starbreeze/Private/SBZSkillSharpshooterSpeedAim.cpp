#include "SBZSkillSharpshooterSpeedAim.h"

USBZSkillSharpshooterSpeedAim::USBZSkillSharpshooterSpeedAim() {
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillSharpshooterSpeedAim::StaticClass();
}


