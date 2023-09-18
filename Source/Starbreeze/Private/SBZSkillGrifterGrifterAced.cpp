#include "SBZSkillGrifterGrifterAced.h"

USBZSkillGrifterGrifterAced::USBZSkillGrifterGrifterAced() {
    this->ActivationDelay = 1.00f;
    this->BuffActivationArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillGrifterGrifterAced::StaticClass();
}


