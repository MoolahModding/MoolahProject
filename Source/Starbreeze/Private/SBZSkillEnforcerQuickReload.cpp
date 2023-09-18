#include "SBZSkillEnforcerQuickReload.h"

USBZSkillEnforcerQuickReload::USBZSkillEnforcerQuickReload() {
    this->RequiredBuffTypeArray.AddDefaulted(2);
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEnforcerQuickReload::StaticClass();
}


