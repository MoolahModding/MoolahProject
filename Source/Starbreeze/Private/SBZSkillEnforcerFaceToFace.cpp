#include "SBZSkillEnforcerFaceToFace.h"

USBZSkillEnforcerFaceToFace::USBZSkillEnforcerFaceToFace() {
    this->RequiredBuffTypeArray.AddDefaulted(2);
    this->FloatArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillEnforcerFaceToFace::StaticClass();
}


