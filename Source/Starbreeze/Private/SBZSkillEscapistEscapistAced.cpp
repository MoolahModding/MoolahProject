#include "SBZSkillEscapistEscapistAced.h"

USBZSkillEscapistEscapistAced::USBZSkillEscapistEscapistAced() {
    this->BuffActivationArray.AddDefaulted(2);
    this->RequiredBuffTypeArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEscapistEscapistAced::StaticClass();
}


