#include "SBZSkillTransporterPowerLifter.h"

USBZSkillTransporterPowerLifter::USBZSkillTransporterPowerLifter() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTransporterPowerLifter::StaticClass();
}


