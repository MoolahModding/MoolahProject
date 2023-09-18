#include "SBZSkillEnforcerCombatReload.h"

USBZSkillEnforcerCombatReload::USBZSkillEnforcerCombatReload() {
    this->BuffActivationArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEnforcerCombatReload::StaticClass();
}


