#include "SBZProgressionSaveGame.h"

USBZProgressionSaveGame::USBZProgressionSaveGame() {
}

TArray<FSBZWeaponInventorySlot> USBZProgressionSaveGame::GetWeaponInventorySlotArray(ESBZEquippableLoadoutSlot EquippableSlot) const {
    return TArray<FSBZWeaponInventorySlot>();
}

TArray<FSBZSuitInventorySlot> USBZProgressionSaveGame::GetUncheckedSuitInventorySlotArray() const {
    return TArray<FSBZSuitInventorySlot>();
}

TArray<FSBZMaskInventorySlot> USBZProgressionSaveGame::GetUncheckedMaskInventorySlotArray() const {
    return TArray<FSBZMaskInventorySlot>();
}

TArray<FSBZGloveInventorySlot> USBZProgressionSaveGame::GetUncheckedGloveInventorySlotArray() const {
    return TArray<FSBZGloveInventorySlot>();
}

TArray<FSBZSuitInventorySlot> USBZProgressionSaveGame::GetSuitInventorySlotArray() const {
    return TArray<FSBZSuitInventorySlot>();
}

FSBZPlayerCosmeticsConfig USBZProgressionSaveGame::GetPlayerCosmeticsConfigArrayForPlatform() {
    return FSBZPlayerCosmeticsConfig{};
}

TArray<FSBZMaskInventorySlot> USBZProgressionSaveGame::GetMaskInventorySlotArray() const {
    return TArray<FSBZMaskInventorySlot>();
}

TArray<FSBZGloveInventorySlot> USBZProgressionSaveGame::GetGloveInventorySlotArray() const {
    return TArray<FSBZGloveInventorySlot>();
}

int32 USBZProgressionSaveGame::GetEquippedWeaponInventorySlotIndex(const int32 LoadoutIndex, ESBZEquippableLoadoutSlot ItemSlot) const {
    return 0;
}


