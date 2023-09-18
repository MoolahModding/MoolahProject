#include "SBZSkillEnforcerSolid.h"

USBZSkillEnforcerSolid::USBZSkillEnforcerSolid() {
    this->RequiredBuffTypeArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEnforcerSolid::StaticClass();
}


