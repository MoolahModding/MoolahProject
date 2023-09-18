#include "SBZSkillGunslingerGunslingerAced.h"

USBZSkillGunslingerGunslingerAced::USBZSkillGunslingerGunslingerAced() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillGunslingerGunslingerAced::StaticClass();
}


