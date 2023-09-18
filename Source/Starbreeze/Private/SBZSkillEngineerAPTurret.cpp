#include "SBZSkillEngineerAPTurret.h"

USBZSkillEngineerAPTurret::USBZSkillEngineerAPTurret() {
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEngineerAPTurret::StaticClass();
}


