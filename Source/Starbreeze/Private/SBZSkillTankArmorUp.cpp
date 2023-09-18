#include "SBZSkillTankArmorUp.h"

USBZSkillTankArmorUp::USBZSkillTankArmorUp() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTankArmorUp::StaticClass();
}


