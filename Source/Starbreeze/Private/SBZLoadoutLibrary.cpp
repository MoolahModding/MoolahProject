#include "SBZLoadoutLibrary.h"

void USBZLoadoutLibrary::SetWeaponPartOnWeapon(const UObject* WorldContextObject, const ESBZEquippableLoadoutSlot EquippableSlot, const int32 SlotIndex, const USBZWeaponPartSlot* ModularPartSlot, const USBZEquippablePartDataAsset* EquippablePartDataAsset) {
}

void USBZLoadoutLibrary::SetCosmeticPartOnWeapon(const UObject* WorldContextObject, const ESBZEquippableLoadoutSlot LoadoutSlot, const int32 SlotIndex, const USBZCosmeticsPartSlot* CosmeticsPartSlot, const FSBZEquippablePartConfigGroup& EquippablePartConfigGroup) {
}

void USBZLoadoutLibrary::RemoveCosmeticPartOnWeapon(const UObject* WorldContextObject, const int32 SlotIndex, const ESBZEquippableLoadoutSlot ItemSlot, const USBZCosmeticsPartSlot* CosmeticsPartSlot, const USBZCosmeticsDataAsset* CosmeticsDataAsset) {
}

bool USBZLoadoutLibrary::IsValidLoadout(const UObject* WorldContextObject, const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) {
    return false;
}

TArray<FSBZWeaponInventorySlot> USBZLoadoutLibrary::GetWeaponConfigSlotsForEquippable(const UObject* WorldContextObject, ESBZEquippableLoadoutSlot EquippableSlot) {
    return TArray<FSBZWeaponInventorySlot>();
}

FSBZWeaponInventorySlot USBZLoadoutLibrary::GetWeaponConfigSlot(const UObject* WorldContextObject, ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return FSBZWeaponInventorySlot{};
}

void USBZLoadoutLibrary::GetInventorySuitSlotAt(const UObject* WorldContextObject, FSBZSuitInventorySlot& OutSuitInventorySlot, int32 SuitSlotIndex, bool& IsValidIndex) {
}

void USBZLoadoutLibrary::GetInventoryGloveSlotAt(const UObject* WorldContextObject, FSBZGloveInventorySlot& OutGloveInventorySlot, int32 GloveSlotIndex, bool& IsValidIndex) {
}

int32 USBZLoadoutLibrary::GetActivePlayerLoadoutIndex(const UObject* WorldContextObject) {
    return 0;
}

USBZLoadoutLibrary::USBZLoadoutLibrary() {
}

