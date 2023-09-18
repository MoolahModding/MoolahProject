#include "SBZSkillMedicTriage.h"

USBZSkillMedicTriage::USBZSkillMedicTriage() {
    this->BuffActivationArray.AddDefaulted(3);
    this->RequiredBuffTypeArray.AddDefaulted(3);
    this->bIsAnyRequiredBuffTypeEnough = true;
    this->FloatArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillMedicTriage::StaticClass();
}


