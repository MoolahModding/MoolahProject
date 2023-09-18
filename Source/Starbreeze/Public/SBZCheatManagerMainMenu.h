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

    UFUNCTION(BlueprintCallable, Exec)
    void WriteAchievement(const FString& AchievementId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UseDefaultSuit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UseDefaultMask();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockCharacterForTutorial();
    
    UFUNCTION(Exec)
    void SetSecondaryWeaponLoadout(uint32 LoadoutIndex, uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetPrimaryWeaponLoadout(uint32 LoadoutIndex, uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetEquippiedSuitInventoryIndex(uint32 ConfigSlotIndex);
    
    UFUNCTION(Exec)
    void SetEquippiedMaskInventoryIndex(uint32 ConfigSlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCheatAllowAttachAllWeaponParts(bool bIsSetCheatAllowAttachAllWeaponParts);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetActiveLoadoutIndex(int32 ActiveLoadoutIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendPartyMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectCharacterIntoSlot(int32 SelectedCharacterIndex, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectCharacterIntoFirstAvailableSlot(int32 SelectedCharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetPriceProgression();
    
    UFUNCTION(Exec)
    void RemoveWeaponPartConfig(uint32 SlotIndex, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveWeaponDummyPattern(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveWeaponDummyCharm(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCharacterFromSelectedSlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAsset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QueryAchivements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PurchaseRealMoneyItems(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PurchaseItem(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockCharacterForTutorial();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadWeaponExperienceToLevelTable(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinPartyByCode(const FString& Code);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWeaponProgressionForBarrelSlot(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPartyCode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetCosmeticsForWeapon(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GamepadOpenInGameCheatMenu(FKey Key);
    
    UFUNCTION(Exec)
    void EmptySecondaryWeaponLoadout(uint32 LoadoutIndex);
    
    UFUNCTION(Exec)
    void EmptyPrimaryWeaponLoadout(uint32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpWeaponWeaponPartProgressionArray(const FString& ItemIdSku, const FString& EntitlementId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpWeaponSlotToWeaponPartMap(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpSteamItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpSelectablePlayerCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpRealMoneyStoreItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPreferredCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayerSkills();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayerSkillPoints();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpNextResetTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpItemsProgressions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpInventoryItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCosmeticsInventoryItemsForWeaponPatternSlot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCosmeticsInventoryItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCharacterInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpBestLevelTimes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpBaseWeaponProgressionLevel(const FString& ItemSku);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpBaseWeaponProgressionInfo(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAvavilableWeaponParts(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAttachedWeaponPartsForAllInventorySlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllWeaponPresets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllVendorItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllSuitInventorySlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllPlayerStatistics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllMaskInventorySlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllItemProgressionLevels();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllGloveInventorySlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DiscardItem(const FString& EntitlementId, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAllItemsResearched(bool bIsDebugAllItemsResearched);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConsumeUserEntitlement(const FString& EntitlementId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPreferredCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CanEquipDummyPatternToWeapon(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuySecondaryWeaponConfigSlot(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuySecondaryWeapon(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuyPrimaryWeaponConfigSlot(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuyPrimaryWeapon(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuyLoadoutSlot(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuyItemAccelByteRequest(const FString& ItemId, const FString& ItemSku, int32 Price, int32 DiscountedPrice, int32 Quantity, const FString& AccelByteCurrencyCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuyItem(const FString& ItemSku);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyWeaponDummyPattern(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyWeaponDummyCharm(const FString& WeaponEntitlementIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyAsset(const FString& ItemSku);
    
    UFUNCTION(Exec)
    void AddUniquePartToWeaponConfig(uint32 SlotIndex, const FString& SlotName, const FString& WeaponPartName);
    
};

