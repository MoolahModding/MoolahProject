#include "SBZEquippableData.h"

USBZEquippableData::USBZEquippableData() {
    this->bIsOverkill = false;
    this->bIsInitialLoadoutAllowed = true;
    this->EquippableDefaultIdleFPPose = NULL;
    this->EquippableDefaultIdleTPPose = NULL;
    this->DefaultRightGripFPPose = NULL;
    this->DefaultLeftGripFPPose = NULL;
    this->DefaultRightGripTPPose = NULL;
    this->DefaultLeftGripTPPose = NULL;
    this->TriggerDisciplineRightGripFPPose = NULL;
    this->TriggerDisciplineLeftGripFPPose = NULL;
    this->TriggerDisciplineRightGripTPPose = NULL;
    this->TriggerDisciplineLeftGripTPPose = NULL;
    this->EquippableFamily = ESBZEquippableFamily::HandGun1H;
    this->CompatibleStances = 2147483647;
    this->WeightTierOffset = 0.00f;
    this->WeightOverride = NULL;
    this->OverskillData = NULL;
    this->MeleeDamageData = NULL;
    this->bIsDropPhysicalize = true;
    this->SprintEnterPlayRate = 1.00f;
    this->SprintExitPlayRate = 1.00f;
    this->EquippableMenuAnimCollection = NULL;
}


