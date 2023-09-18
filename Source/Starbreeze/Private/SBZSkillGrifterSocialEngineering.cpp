#include "SBZSkillGrifterSocialEngineering.h"

USBZSkillGrifterSocialEngineering::USBZSkillGrifterSocialEngineering() {
    this->RequiredBuffTypeArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillGrifterSocialEngineering::StaticClass();
}


