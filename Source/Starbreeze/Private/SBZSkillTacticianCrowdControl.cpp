#include "SBZSkillTacticianCrowdControl.h"

USBZSkillTacticianCrowdControl::USBZSkillTacticianCrowdControl() {
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTacticianCrowdControl::StaticClass();
}


