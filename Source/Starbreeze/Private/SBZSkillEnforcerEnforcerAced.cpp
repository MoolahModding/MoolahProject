#include "SBZSkillEnforcerEnforcerAced.h"

USBZSkillEnforcerEnforcerAced::USBZSkillEnforcerEnforcerAced() {
    this->BuffActivationArray.AddDefaulted(1);
    this->RequiredBuffTypeArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(1);
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEnforcerEnforcerAced::StaticClass();
}


