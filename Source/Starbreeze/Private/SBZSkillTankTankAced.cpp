#include "SBZSkillTankTankAced.h"

USBZSkillTankTankAced::USBZSkillTankTankAced() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTankTankAced::StaticClass();
}


