#include "SBZSkillHackerApplianceBreach.h"

USBZSkillHackerApplianceBreach::USBZSkillHackerApplianceBreach() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillHackerApplianceBreach::StaticClass();
}


