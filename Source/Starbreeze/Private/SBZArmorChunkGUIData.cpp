#include "SBZArmorChunkGUIData.h"

FSBZArmorChunkGUIData::FSBZArmorChunkGUIData() {
    this->Type = ESBZArmorChunkType::Normal;
    this->Widget = NULL;
    this->DynamicMaterial = NULL;
    this->ArmorScale = 0.00f;
    this->TraumaScale = 0.00f;
    this->ReplenishScale = 0.00f;
}

