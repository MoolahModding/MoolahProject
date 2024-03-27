#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZCheatManagerBase.h"
#include "SBZCheatManagerMainMenu.generated.h"

class UInputComponent;
class USBZSprayCanData;
class USBZSuitPartConfig;
class UTexture2D;

UCLASS(Blueprintable)
class USBZCheatManagerMainMenu : public USBZCheatManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* MenuInputComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSprayCanData* SelectedMaskSprayCanData[5];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSuitPartConfig* SuitPartConfigs[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UTexture2D*> IconTextureSet;
    
public:
    USBZCheatManagerMainMenu();
    UFUNCTION(Exec)
    void WriteAchievement(const FString& AchievementId);
    
    UFUNCTION(Exec)
    void UseDefaultSuit();
    
    UFUNCTION(Exec)
    void UseDefaultMask();
    
    UFUNCTION(Exec)
    void UnlockCharacterForTutorial();
    
    UFUNCTION(Exec)
    void SyncDLC();
    
    UFUNCTION(Exec)
    void SimulateProgressivePriceResetEveryMinute();
    
    UFUNCTION(Exec)
    void SimulateForeground();
    
    UFUNCTION(Exec)
    void SetSecondaryWeaponLoadout(uint32 LoadoutIndex, uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetPrimaryWeaponLoadout(uint32 LoadoutIndex, uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetEquippiedSuitInventoryIndex(uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetEquippiedMaskInventoryIndex(uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetCheatAllowAttachAllWeaponParts(bool bIsSetCheatAllowAttachAllWeaponParts);
    
    UFUNCTION(Exec)
    void SetActiveLoadoutIndex(int32 ActiveLoadoutIndex);
    
    UFUNCTION(Exec)
    void SendPartyMessage(const FString& Message);
    
    UFUNCTION(Exec)
    void SendLobbyMessage(const FString& Message);
    
    UFUNCTION(Exec)
    void SelectCharacterIntoSlot(int32 SelectedCharacterIndex, int32 SlotIndex);
    
    UFUNCTION(Exec)
    void SelectCharacterIntoFirstAvailableSlot(int32 SelectedCharacterIndex);
    
    UFUNCTION(Exec)
    void ResetPriceProgression();
    
    UFUNCTION(Exec)
    void RemoveWeaponPartConfig(uint32 SlotIndex, const FString& SlotName);
    
    UFUNCTION(Exec)
    void RemoveWeaponDummyPattern(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void RemoveWeaponDummyCharm(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void RemoveCharacterFromSelectedSlot(int32 SlotIndex);
    
    UFUNCTION(Exec)
    void RemoveAsset();
    
    UFUNCTION(Exec)
    void QueryAchivements();
    
    UFUNCTION(Exec)
    void PurchaseRealMoneyItems(const FString& ItemId);
    
    UFUNCTION(Exec)
    void PurchaseItem(const FString& ItemId);
    
    UFUNCTION(Exec)
    void LockCharacterForTutorial();
    
    UFUNCTION(Exec)
    void LoadWeaponExperienceToLevelTable(const FString& ItemId);
    
    UFUNCTION(Exec)
    void JoinPartyByCode(const FString& Code);
    
    UFUNCTION(Exec)
    void GetWeaponProgressionForBarrelSlot(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void GetUserEntitlementsForAllItems();
    
    UFUNCTION(Exec)
    void GetPartyCode();
    
    UFUNCTION(Exec)
    void GetCosmeticsForWeapon(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void GamepadOpenInGameCheatMenu(FKey Key);
    
    UFUNCTION(Exec)
    void EmptySecondaryWeaponLoadout(uint32 LoadoutIndex);
    
    UFUNCTION(Exec)
    void EmptyPrimaryWeaponLoadout(uint32 LoadoutIndex);
    
    UFUNCTION(Exec)
    void DumpWeaponWeaponPartProgressionArray(const FString& ItemIdSku, const FString& EntitlementId);
    
    UFUNCTION(Exec)
    void DumpWeaponSlotToWeaponPartMap(const FString& ItemId);
    
    UFUNCTION(Exec)
    void DumpSteamItems();
    
    UFUNCTION(Exec)
    void DumpSelectablePlayerCharacters();
    
    UFUNCTION(Exec)
    void DumpRecommendedChallenges();
    
    UFUNCTION(Exec)
    void DumpReceipts() const;
    
    UFUNCTION(Exec)
    void DumpRealMoneyStoreItems();
    
    UFUNCTION(Exec)
    void DumpPreferredCharacters();
    
    UFUNCTION(Exec)
    void DumpPlayerSkills();
    
    UFUNCTION(Exec)
    void DumpPlayerSkillPoints();
    
    UFUNCTION(Exec)
    void DumpOwnedHeists();
    
    UFUNCTION(Exec)
    void DumpNextResetTime();
    
    UFUNCTION(Exec)
    void DumpItemsProgressions();
    
    UFUNCTION(Exec)
    void DumpInventoryItems();
    
    UFUNCTION(Exec)
    void DumpGetProgressInfo();
    
    UFUNCTION(Exec)
    void DumpEntitlementSkuFromDLCButNotOwnedArray() const;
    
    UFUNCTION(Exec)
    void DumpDLCRewards() const;
    
    UFUNCTION(Exec)
    void DumpCurrentRenownLevel();
    
    UFUNCTION(Exec)
    void DumpCosmeticsInventoryItemsForWeaponPatternSlot();
    
    UFUNCTION(Exec)
    void DumpCosmeticsInventoryItems();
    
    UFUNCTION(Exec)
    void DumpCharacterInventory();
    
    UFUNCTION(Exec)
    void DumpBestLevelTimes();
    
    UFUNCTION(Exec)
    void DumpBaseWeaponProgressionLevel(const FString& ItemSku);
    
    UFUNCTION(Exec)
    void DumpBaseWeaponProgressionInfo(const FString& ItemId);
    
    UFUNCTION(Exec)
    void DumpAvavilableWeaponParts(const FString& ItemId);
    
    UFUNCTION(Exec)
    void DumpAttachedWeaponPartsForAllInventorySlots();
    
    UFUNCTION(Exec)
    void DumpAllWeaponPresets();
    
    UFUNCTION(Exec)
    void DumpAllVendorItems();
    
    UFUNCTION(Exec)
    void DumpAllSuitInventorySlots();
    
    UFUNCTION(Exec)
    void DumpAllMaskInventorySlots();
    
    UFUNCTION(Exec)
    void DumpAllItemProgressionLevels();
    
    UFUNCTION(Exec)
    void DumpAllGloveInventorySlots();
    
    UFUNCTION(Exec)
    void DiscardItem(const FString& EntitlementId, const FString& ItemId);
    
    UFUNCTION(Exec)
    void DebugAllItemsResearched(bool bIsDebugAllItemsResearched);
    
    UFUNCTION(Exec)
    void ConsumeUserEntitlement(const FString& EntitlementId);
    
    UFUNCTION(Exec)
    void ClearPreferredCharacters();
    
    UFUNCTION(Exec)
    void ClearAllAchievements();
    
    UFUNCTION(Exec)
    void CanEquipDummyPatternToWeapon(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void BuySecondaryWeaponConfigSlot(const FString& ItemId);
    
    UFUNCTION(Exec)
    void BuySecondaryWeapon(const FString& ItemId);
    
    UFUNCTION(Exec)
    void BuyPrimaryWeaponConfigSlot(const FString& ItemId);
    
    UFUNCTION(Exec)
    void BuyPrimaryWeapon(const FString& ItemId);
    
    UFUNCTION(Exec)
    void BuyLoadoutSlot(const FString& ItemId);
    
    UFUNCTION(Exec)
    void BuyItemAccelByteRequest(const FString& ItemId, const FString& ItemSku, int32 Price, int32 DiscountedPrice, int32 Quantity, const FString& AccelByteCurrencyCode);
    
    UFUNCTION(Exec)
    void BuyItem(const FString& ItemSku);
    
    UFUNCTION(Exec)
    void ApplyWeaponDummyPattern(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void ApplyWeaponDummyCharm(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(Exec)
    void ApplyAsset(const FString& ItemSku);
    
    UFUNCTION(Exec)
    void AddUniquePartToWeaponConfig(uint32 SlotIndex, const FString& SlotName, const FString& WeaponPartName);
    
    UFUNCTION(Exec)
    void AddOwnedDLCAndPopulateEntitlementDisabledArray(const FString& DLCNameCommaList);
    
};

