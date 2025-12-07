#include "SBZArmorData.h"

USBZArmorData::USBZArmorData() {
    this->ReplenishDelay = 0.00f;
    this->MaxDownCount = 0.00f;
    this->LoadoutWeight = 0.00f;
    this->ConsumableCount = 0.00f;
    this->ToolCount = 0;
    this->AmmoCapacityScale = 1.00f;
    this->FirstAidPackHealthPerCharge = 0.00f;
    this->NoThrowableReplenishDelay = 10.00f;
    this->NoThrowableReplenishCount = 0.00f;
    this->RepairArmorInteractionImmuneDuration = 0.00f;
    this->BreakOwnArmorImmuneDuration = 2.00f;
    this->SpeedPenalty = ESBZArmorSpeedPenalty::None;
    this->ArmorDescriptionStatColorName = TEXT("StatDescription");
}

int32 USBZArmorData::GetToolCount() const {
    return 0;
}

ESBZArmorSpeedPenalty USBZArmorData::GetSpeedPenalty() const {
    return ESBZArmorSpeedPenalty::None;
}

float USBZArmorData::GetReplenishDelay() const {
    return 0.0f;
}

float USBZArmorData::GetRepairArmorInteractionImmuneDuration() const {
    return 0.0f;
}

float USBZArmorData::GetNoThrowableReplenishDelay() const {
    return 0.0f;
}

float USBZArmorData::GetNoThrowableReplenishCount() const {
    return 0.0f;
}

float USBZArmorData::GetMaxDownCount() const {
    return 0.0f;
}

float USBZArmorData::GetLoadoutWeight() const {
    return 0.0f;
}

FText USBZArmorData::GetFormattedPassiveDescriptionText() const {
    return FText::GetEmpty();
}

float USBZArmorData::GetFirstAidPackHealthPerCharge() const {
    return 0.0f;
}

float USBZArmorData::GetConsumableCount() const {
    return 0.0f;
}

TArray<ESBZArmorChunkType> USBZArmorData::GetChunkTypeArray() const {
    return TArray<ESBZArmorChunkType>();
}

float USBZArmorData::GetAmmoCapacityScale() const {
    return 0.0f;
}


