#include "SBZSkillSharpshooterCuttingShot.h"

USBZSkillSharpshooterCuttingShot::USBZSkillSharpshooterCuttingShot() {
    this->RequiredBuffTypeArray.AddDefaulted(1);
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillSharpshooterCuttingShot::StaticClass();
}


