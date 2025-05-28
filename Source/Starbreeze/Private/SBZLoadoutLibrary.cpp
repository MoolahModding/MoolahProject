#include "SBZLoadoutLibrary.h"

USBZLoadoutLibrary::USBZLoadoutLibrary() {
}

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

USBZInventoryBaseData* USBZLoadoutLibrary::GetSuitDataForLoadoutIndex(const UObject* WorldContextObject, const int32 LoadoutIndex) {
    return NULL;
}

USBZInventoryBaseData* USBZLoadoutLibrary::GetSuitData(const UObject* WorldContextObject) {
    return NULL;
}

USBZInventoryBaseData* USBZLoadoutLibrary::GetMaskDataForLoadoutIndex(const UObject* WorldContextObject, const int32 LoadoutIndex) {
    return NULL;
}

USBZInventoryBaseData* USBZLoadoutLibrary::GetMaskData(const UObject* WorldContextObject) {
    return NULL;
}

void USBZLoadoutLibrary::GetInventorySuitSlotAt(const UObject* WorldContextObject, FSBZSuitInventorySlot& OutSuitInventorySlot, int32 SuitSlotIndex, bool& IsValidIndex) {
}

void USBZLoadoutLibrary::GetInventoryGloveSlotAt(const UObject* WorldContextObject, FSBZGloveInventorySlot& OutGloveInventorySlot, int32 GloveSlotIndex, bool& IsValidIndex) {
}

USBZInventoryBaseData* USBZLoadoutLibrary::GetGloveDataForLoadoutIndex(const UObject* WorldContextObject, const int32 LoadoutIndex) {
    return NULL;
}

USBZInventoryBaseData* USBZLoadoutLibrary::GetGloveData(const UObject* WorldContextObject) {
    return NULL;
}

FSBZArmorInventorySlot USBZLoadoutLibrary::GetArmorInventorySlot(const UObject* WorldContextObject, int32 InArmorSlotIndex) {
    return FSBZArmorInventorySlot{};
}

FSBZArmorConfig USBZLoadoutLibrary::GetArmorConfigSlot(const UObject* WorldContextObject, int32 InArmorSlotIndex) {
    return FSBZArmorConfig{};
}

int32 USBZLoadoutLibrary::GetActivePlayerLoadoutIndex(const UObject* WorldContextObject) {
    return 0;
}


