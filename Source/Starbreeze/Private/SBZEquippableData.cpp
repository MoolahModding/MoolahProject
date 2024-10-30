#include "SBZEquippableData.h"

USBZEquippableData::USBZEquippableData() {
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
    this->OverskillData = NULL;
    this->EquippableMenuAnimCollection = NULL;
}


