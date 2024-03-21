#include "SBZSkillData.h"

FText USBZSkillData::GetFormattedDescriptionText() const {
    return FText::GetEmpty();
}

USBZSkillData::USBZSkillData() {
    this->ProgressLevel = 1000.00f;
    this->bIsEquippedTagGranted = false;
    this->PlayerEffect = NULL;
    this->CrewEffect = NULL;
    this->bIsAnyRequiredBuffTypeEnough = false;
    this->CooldownSeconds = 0.00f;
}

