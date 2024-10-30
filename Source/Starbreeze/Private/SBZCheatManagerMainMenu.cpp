#include "SBZCheatManagerMainMenu.h"

USBZCheatManagerMainMenu::USBZCheatManagerMainMenu() {
    this->MenuInputComponent = NULL;
    this->SelectedMaskSprayCanData[0] = NULL;
    this->SelectedMaskSprayCanData[1] = NULL;
    this->SelectedMaskSprayCanData[2] = NULL;
    this->SelectedMaskSprayCanData[3] = NULL;
    this->SelectedMaskSprayCanData[4] = NULL;
    this->SuitPartConfigs[0] = NULL;
    this->SuitPartConfigs[1] = NULL;
    this->SuitPartConfigs[2] = NULL;
}

void USBZCheatManagerMainMenu::WriteAchievement(const FString& AchievementId) {
}

void USBZCheatManagerMainMenu::UseDefaultSuit() {
}

void USBZCheatManagerMainMenu::UseDefaultMask() {
}

void USBZCheatManagerMainMenu::UnlockCharacterForTutorial() {
}

void USBZCheatManagerMainMenu::SyncDLC() {
}

void USBZCheatManagerMainMenu::SimulateForeground() {
}

void USBZCheatManagerMainMenu::SetSecondaryWeaponLoadout(uint32 LoadoutIndex, uint32 ConfigSlotIndex) {
}

void USBZCheatManagerMainMenu::SetPrimaryWeaponLoadout(uint32 LoadoutIndex, uint32 ConfigSlotIndex) {
}

void USBZCheatManagerMainMenu::SetLoadoutName(const int32 LoadoutIndex, const FString& LoadoutName) {
}

void USBZCheatManagerMainMenu::SetEquippiedSuitInventoryIndex(uint32 ConfigSlotIndex) {
}

void USBZCheatManagerMainMenu::SetEquippiedMaskInventoryIndex(uint32 ConfigSlotIndex) {
}

void USBZCheatManagerMainMenu::SetCheatAllowAttachAllWeaponParts(bool bIsSetCheatAllowAttachAllWeaponParts) {
}

void USBZCheatManagerMainMenu::SetActiveLoadoutIndex(int32 ActiveLoadoutIndex) {
}

void USBZCheatManagerMainMenu::SendPartyMessage(const FString& Message) {
}

void USBZCheatManagerMainMenu::SendLobbyMessage(const FString& Message) {
}

void USBZCheatManagerMainMenu::SelectCharacterIntoSlot(int32 SelectedCharacterIndex, int32 SlotIndex) {
}

void USBZCheatManagerMainMenu::SelectCharacterIntoFirstAvailableSlot(int32 SelectedCharacterIndex) {
}

void USBZCheatManagerMainMenu::ResetPriceProgression() {
}

void USBZCheatManagerMainMenu::RemoveWeaponPartConfig(uint32 SlotIndex, const FString& SlotName) {
}

void USBZCheatManagerMainMenu::RemoveWeaponDummyPattern(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::RemoveWeaponDummyCharm(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::RemoveCharacterFromSelectedSlot(int32 SlotIndex) {
}

void USBZCheatManagerMainMenu::RemoveAsset() {
}

void USBZCheatManagerMainMenu::RefreshDailyChallenges() {
}

void USBZCheatManagerMainMenu::QueryAchivements() {
}

void USBZCheatManagerMainMenu::PurchaseRealMoneyItems(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::PurchaseItem(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::PrintNews(ESBZOnlineCode ErrorCode, const TArray<FSBZNewsDataUIEntry>& NewsFeedList) {
}

void USBZCheatManagerMainMenu::LockCharacterForTutorial() {
}

void USBZCheatManagerMainMenu::LoadWeaponExperienceToLevelTable(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::JoinPartyByCode(const FString& Code) {
}

void USBZCheatManagerMainMenu::GetWeaponProgressionForBarrelSlot(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::GetUserEntitlementsForAllItems() {
}

void USBZCheatManagerMainMenu::GetPartyCode() {
}

void USBZCheatManagerMainMenu::GetCosmeticsForWeapon(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::GamepadOpenInGameCheatMenu(FKey Key) {
}

void USBZCheatManagerMainMenu::EmptySecondaryWeaponLoadout(uint32 LoadoutIndex) {
}

void USBZCheatManagerMainMenu::EmptyPrimaryWeaponLoadout(uint32 LoadoutIndex) {
}

void USBZCheatManagerMainMenu::DumpWeaponWeaponPartProgressionArray(const FString& ItemIdSku, const FString& EntitlementId) {
}

void USBZCheatManagerMainMenu::DumpWeaponSlotToWeaponPartMap(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::DumpWeaponSlotEntitlementSkuDlcMap() const {
}

void USBZCheatManagerMainMenu::DumpSteamItems() {
}

void USBZCheatManagerMainMenu::DumpSelectablePlayerCharacters() {
}

void USBZCheatManagerMainMenu::DumpRecommendedChallenges() {
}

void USBZCheatManagerMainMenu::DumpReceipts() const {
}

void USBZCheatManagerMainMenu::DumpRealMoneyStoreItems() {
}

void USBZCheatManagerMainMenu::DumpPreferredCharacters() {
}

void USBZCheatManagerMainMenu::DumpPlayerSkills() {
}

void USBZCheatManagerMainMenu::DumpPlayerSkillPoints() {
}

void USBZCheatManagerMainMenu::DumpPartyMemberLoadout() {
}

void USBZCheatManagerMainMenu::DumpOwnedHeists() {
}

void USBZCheatManagerMainMenu::DumpNextResetTime() {
}

void USBZCheatManagerMainMenu::DumpNews() {
}

void USBZCheatManagerMainMenu::DumpMaskOfTheWeek() {
}

void USBZCheatManagerMainMenu::DumpLoadoutName(const int32 LoadoutIndex) {
}

void USBZCheatManagerMainMenu::DumpItemsProgressions() {
}

void USBZCheatManagerMainMenu::DumpIsQuickPlayEnabled() {
}

void USBZCheatManagerMainMenu::DumpInventoryItems() {
}

void USBZCheatManagerMainMenu::DumpGetProgressInfo() {
}

void USBZCheatManagerMainMenu::DumpEntitlementSkuFromDLCButNotOwnedArray() const {
}

void USBZCheatManagerMainMenu::DumpDLCRewards() const {
}

void USBZCheatManagerMainMenu::DumpDailyChallenges() {
}

void USBZCheatManagerMainMenu::DumpCurrentRenownLevel() {
}

void USBZCheatManagerMainMenu::DumpCosmeticsInventoryItemsForWeaponPatternSlot() {
}

void USBZCheatManagerMainMenu::DumpCosmeticsInventoryItems() {
}

void USBZCheatManagerMainMenu::DumpCharacterInventory() {
}

void USBZCheatManagerMainMenu::DumpBestLevelTimes() {
}

void USBZCheatManagerMainMenu::DumpBaseWeaponProgressionLevel(const FString& ItemSku) {
}

void USBZCheatManagerMainMenu::DumpBaseWeaponProgressionInfo(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::DumpAvavilableWeaponParts(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::DumpAttachedWeaponPartsForAllInventorySlots() {
}

void USBZCheatManagerMainMenu::DumpAllWeaponPresets() {
}

void USBZCheatManagerMainMenu::DumpAllVendorItems() {
}

void USBZCheatManagerMainMenu::DumpAllSuitInventorySlots() {
}

void USBZCheatManagerMainMenu::DumpAllMaskInventorySlots() {
}

void USBZCheatManagerMainMenu::DumpAllItemProgressionLevels() {
}

void USBZCheatManagerMainMenu::DumpAllGloveInventorySlots() {
}

void USBZCheatManagerMainMenu::DiscardItem(const FString& EntitlementId, const FString& ItemId) {
}

void USBZCheatManagerMainMenu::DebugAllItemsResearched(bool bIsDebugAllItemsResearched) {
}

void USBZCheatManagerMainMenu::ConsumeUserEntitlement(const FString& EntitlementId) {
}

void USBZCheatManagerMainMenu::ClearPreferredCharacters() {
}

void USBZCheatManagerMainMenu::ClearAllAchievements() {
}

void USBZCheatManagerMainMenu::CanEquipDummyPatternToWeapon(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::BuySecondaryWeaponConfigSlot(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::BuySecondaryWeapon(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::BuyPrimaryWeaponConfigSlot(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::BuyPrimaryWeapon(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::BuyLoadoutSlot(const FString& ItemId) {
}

void USBZCheatManagerMainMenu::BuyItemAccelByteRequest(const FString& ItemId, const FString& ItemSku, int32 Price, int32 DiscountedPrice, int32 Quantity, const FString& AccelByteCurrencyCode) {
}

void USBZCheatManagerMainMenu::BuyItem(const FString& ItemSku) {
}

void USBZCheatManagerMainMenu::ApplyWeaponDummyPattern(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::ApplyWeaponDummyCharm(const FString& WeaponEntitlementIdString) {
}

void USBZCheatManagerMainMenu::ApplyAsset(const FString& ItemSku) {
}

void USBZCheatManagerMainMenu::AddUniquePartToWeaponConfig(uint32 SlotIndex, const FString& SlotName, const FString& WeaponPartName) {
}

void USBZCheatManagerMainMenu::AddOwnedDLCAndPopulateEntitlementDisabledArray(const FString& DLCNameCommaList) {
}


