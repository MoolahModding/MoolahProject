#include "SBZSkillSharpshooterSharpshooter.h"

USBZSkillSharpshooterSharpshooter::USBZSkillSharpshooterSharpshooter() {
    this->BuffActivationArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillSharpshooterSharpshooter::StaticClass();
}


