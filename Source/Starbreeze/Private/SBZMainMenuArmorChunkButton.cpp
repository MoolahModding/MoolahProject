#include "SBZMainMenuArmorChunkButton.h"

USBZMainMenuArmorChunkButton::USBZMainMenuArmorChunkButton() {
    this->ArmorChunkType = ESBZArmorChunkType::Normal;
    this->bIsEquipped = false;
}

void USBZMainMenuArmorChunkButton::SetEquipped(bool bInIsEquipped) {
}


void USBZMainMenuArmorChunkButton::InitializeArmorChunk(const ESBZArmorChunkType InArmorChunkType) {
}

ESBZArmorChunkType USBZMainMenuArmorChunkButton::GetArmorChunkType() const {
    return ESBZArmorChunkType::Normal;
}

FSBZArmorChunkTypeData USBZMainMenuArmorChunkButton::GetArmorChunkData() const {
    return FSBZArmorChunkTypeData{};
}



