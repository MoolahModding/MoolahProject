#include "SBZSkillManager.h"

USBZSkillManager::USBZSkillManager() {
    this->ModifyingSkillLine = NULL;
}

bool USBZSkillManager::UnequipSkills(TArray<USBZSkill*>& Skills, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) {
    return false;
}

bool USBZSkillManager::UnequipSkill(const USBZSkill* Skill, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) {
    return false;
}

void USBZSkillManager::SetResearchMarkerOnSkillLine(const USBZSkillLine* SkillLine) {
}

bool USBZSkillManager::IsSkillEquippable(const USBZSkill* Skill, const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) const {
    return false;
}

int32 USBZSkillManager::GetSkillPointsFromInfamyLevel(int32 InfamyLevel) const {
    return 0;
}

int32 USBZSkillManager::GetSkillPointsFromInfamyExperience(int32 InfamyExperience) const {
    return 0;
}

USBZSkillManager* USBZSkillManager::GetSkillManager(const UObject* WorldContextObject) {
    return NULL;
}

USBZSkill* USBZSkillManager::GetProgressingSkill(const USBZSkillLine* SkillLine) const {
    return NULL;
}

USBZSkillLine* USBZSkillManager::GetPlayerStatsForSkillLine(const ASBZPlayerState* PlayerState, const USBZSkillLineData* SkillLineData) {
    return NULL;
}

USBZSkill* USBZSkillManager::GetPlayerStatsForSkill(const ASBZPlayerState* PlayerState, const USBZSkillLineData* SkillLineData, const USBZSkillData* SkillData) {
    return NULL;
}

void USBZSkillManager::GetPlayerSkills(TArray<USBZSkillLine*>& PlayerSkills) {
}

USBZSkillLine* USBZSkillManager::GetPlayerSkillLine(const FName& AccelByteSkuNo) {
    return NULL;
}

float USBZSkillManager::GetMaxProgressLevel(const USBZSkillLineData* SkillLine) const {
    return 0.0f;
}

int32 USBZSkillManager::GetEarnedSkillPoints() {
    return 0;
}

bool USBZSkillManager::EquipSkills(TArray<USBZSkill*>& Skills, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) {
    return false;
}

bool USBZSkillManager::EquipSkill(const USBZSkill* Skill, FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) {
    return false;
}


