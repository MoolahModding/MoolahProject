#include "SBZSkillMowerMowerAced.h"

USBZSkillMowerMowerAced::USBZSkillMowerMowerAced() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillMowerMowerAced::StaticClass();
}


