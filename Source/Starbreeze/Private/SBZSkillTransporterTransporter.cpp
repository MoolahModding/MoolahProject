#include "SBZSkillTransporterTransporter.h"

USBZSkillTransporterTransporter::USBZSkillTransporterTransporter() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTransporterTransporter::StaticClass();
}


