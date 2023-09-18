#include "SBZSkillEscapistBalanced.h"

USBZSkillEscapistBalanced::USBZSkillEscapistBalanced() {
    this->BuffActivationArray.AddDefaulted(1);
    this->RequiredBuffTypeArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEscapistBalanced::StaticClass();
}


