#include "SBZSkillStrategistMisdirect.h"

USBZSkillStrategistMisdirect::USBZSkillStrategistMisdirect() {
    this->RequiredBuffTypeArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillStrategistMisdirect::StaticClass();
}


