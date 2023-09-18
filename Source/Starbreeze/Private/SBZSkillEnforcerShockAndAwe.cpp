#include "SBZSkillEnforcerShockAndAwe.h"

USBZSkillEnforcerShockAndAwe::USBZSkillEnforcerShockAndAwe() {
    this->FloatArray.AddDefaulted(3);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEnforcerShockAndAwe::StaticClass();
}


