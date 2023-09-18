#include "SBZSkillData.h"

USBZSkillData::USBZSkillData() {
    this->ProgressLevel = 1000.00f;
    this->bIsEquippedTagGranted = false;
    this->PlayerEffect = NULL;
    this->PlayerEffect = NULL;
    this->CrewEffect = NULL;
    this->CrewEffect = NULL;
    this->bIsAnyRequiredBuffTypeEnough = false;
    this->CooldownSeconds = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillData::StaticClass();
}

FText USBZSkillData::GetFormattedDescriptionText() const {
    return FText::GetEmpty();
}


