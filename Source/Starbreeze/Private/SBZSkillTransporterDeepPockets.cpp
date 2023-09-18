#include "SBZSkillTransporterDeepPockets.h"

USBZSkillTransporterDeepPockets::USBZSkillTransporterDeepPockets() {
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTransporterDeepPockets::StaticClass();
}


