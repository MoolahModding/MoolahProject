#include "SBZSkillCQCSpecialistPinPuller.h"

USBZSkillCQCSpecialistPinPuller::USBZSkillCQCSpecialistPinPuller() {
    this->GrenadeData = NULL;
    this->GrenadeAttachSocket = TEXT("RootWeapon");
    this->FlashBangDelay = -1.00f;
    this->BuffActivationArray.AddDefaulted(1);
    this->RequiredBuffTypeArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillCQCSpecialistPinPuller::StaticClass();
}


