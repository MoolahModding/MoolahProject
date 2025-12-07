#include "SBZMainMenuSkillsMenu.h"

USBZMainMenuSkillsMenu::USBZMainMenuSkillsMenu() {
    this->StackValue = TEXT("SkillsCustomization");
    this->AlternativeSelectionInput = TEXT("UI_TertiaryInteraction");
    this->AlternativeSelectionHoldDuration = 0.50f;
    this->DescriptionScrollAxis = TEXT("LookUpRate");
    this->DescriptionScrollSpeed = 1.00f;
    this->AxisDeadZone = 0.10f;
    this->CurrentLoadoutIndex = -1;
}

bool USBZMainMenuSkillsMenu::UnequipSkill(const USBZSkillData* SkillData) {
    return false;
}





void USBZMainMenuSkillsMenu::NativeOnAlternativeSelectionReleased() {
}

void USBZMainMenuSkillsMenu::NativeOnAlternativeSelectionPressed() {
}

bool USBZMainMenuSkillsMenu::IsSkillLocked(const USBZSkillData* SkillData) const {
    return false;
}

bool USBZMainMenuSkillsMenu::IsSkillEquippable(const USBZSkillData* SkillData) const {
    return false;
}

void USBZMainMenuSkillsMenu::HandleProgressionSave(ESBZMetaRequestResult Result) {
}

TArray<bool> USBZMainMenuSkillsMenu::GetSkillTreeTierLockedStatus(FGameplayTag SkillCategoryTag) const {
    return TArray<bool>();
}

int32 USBZMainMenuSkillsMenu::GetSkillTagCount(FGameplayTag GameplayTag, int32 Layer) const {
    return 0;
}

int32 USBZMainMenuSkillsMenu::GetSkillLayerIndex(const USBZSkillData* SkillData) const {
    return 0;
}

int32 USBZMainMenuSkillsMenu::GetSkillCost(const USBZSkillData* SkillData) const {
    return 0;
}

int32 USBZMainMenuSkillsMenu::GetSkillArrayCost() const {
    return 0;
}

int32 USBZMainMenuSkillsMenu::GetEquippedCount() const {
    return 0;
}

int32 USBZMainMenuSkillsMenu::GetCostOfEquippedSkillsWithTag(const FGameplayTag& SkillTag) const {
    return 0;
}

bool USBZMainMenuSkillsMenu::EquipSkill(const USBZSkillData* SkillData) {
    return false;
}

bool USBZMainMenuSkillsMenu::ClearEquippedSkillsWithTag(const FGameplayTag& SkillTag) {
    return false;
}


