#include "SBZSkillSharpshooterPrecisionShot.h"

USBZSkillSharpshooterPrecisionShot::USBZSkillSharpshooterPrecisionShot() {
    this->BuffActivationArray.AddDefaulted(1);
    this->RequiredBuffTypeArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillSharpshooterPrecisionShot::StaticClass();
}


