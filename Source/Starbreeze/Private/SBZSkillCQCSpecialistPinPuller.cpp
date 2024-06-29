#include "SBZSkillCQCSpecialistPinPuller.h"

USBZSkillCQCSpecialistPinPuller::USBZSkillCQCSpecialistPinPuller() {
    this->BuffActivationArray.AddDefaulted(1);
    this->RequiredBuffTypeArray.AddDefaulted(1);
    this->FloatArray.AddDefaulted(1);
    this->GrenadeData = NULL;
    this->GrenadeAttachSocket = TEXT("RootWeapon");
    this->FlashBangDelay = -1.00f;
}


