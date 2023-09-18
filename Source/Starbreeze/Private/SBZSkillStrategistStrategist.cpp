#include "SBZSkillStrategistStrategist.h"

USBZSkillStrategistStrategist::USBZSkillStrategistStrategist() {
    this->FloatArray.AddDefaulted(1);
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillStrategistStrategist::StaticClass();
}


