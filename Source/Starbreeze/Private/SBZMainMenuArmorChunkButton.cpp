#include "SBZMainMenuArmorChunkButton.h"

USBZMainMenuArmorChunkButton::USBZMainMenuArmorChunkButton() {
    this->ArmorChunkType = ESBZArmorChunkType::Normal;
    this->bIsEquipped = false;
    this->ChunkIndex = -1;
    this->ArmorLoadoutIndex = -1;
}

void USBZMainMenuArmorChunkButton::SetEquipped(bool bInIsEquipped) {
}


void USBZMainMenuArmorChunkButton::InitializeArmorChunk(const FGuid& InConfigSlotEntitlementId, const ESBZArmorChunkType InArmorChunkType, int32 InChunkIndex, int32 InArmorLoadoutIndex) {
}

ESBZArmorChunkType USBZMainMenuArmorChunkButton::GetArmorChunkType() const {
    return ESBZArmorChunkType::Normal;
}

FSBZArmorChunkTypeData USBZMainMenuArmorChunkButton::GetArmorChunkData() const {
    return FSBZArmorChunkTypeData{};
}



