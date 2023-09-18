#include "SBZSkillEngineerAced.h"

USBZSkillEngineerAced::USBZSkillEngineerAced() {
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEngineerAced::StaticClass();
}


