#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZEquippablePartConfigGroup.h"
#include "SBZGloveInventorySlot.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZSuitInventorySlot.h"
#include "SBZWeaponInventorySlot.h"
#include "SBZLoadoutLibrary.generated.h"

class UObject;
class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZEquippablePartDataAsset;
class USBZInventoryBaseData;
class USBZWeaponPartSlot;

UCLASS(Blueprintable)
class USBZLoadoutLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZLoadoutLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWeaponPartOnWeapon(const UObject* WorldContextObject, const ESBZEquippableLoadoutSlot EquippableSlot, const int32 SlotIndex, const USBZWeaponPartSlot* ModularPartSlot, const USBZEquippablePartDataAsset* EquippablePartDataAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCosmeticPartOnWeapon(const UObject* WorldContextObject, const ESBZEquippableLoadoutSlot LoadoutSlot, const int32 SlotIndex, const USBZCosmeticsPartSlot* CosmeticsPartSlot, const FSBZEquippablePartConfigGroup& EquippablePartConfigGroup);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveCosmeticPartOnWeapon(const UObject* WorldContextObject, const int32 SlotIndex, const ESBZEquippableLoadoutSlot ItemSlot, const USBZCosmeticsPartSlot* CosmeticsPartSlot, const USBZCosmeticsDataAsset* CosmeticsDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValidLoadout(const UObject* WorldContextObject, const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FSBZWeaponInventorySlot> GetWeaponConfigSlotsForEquippable(const UObject* WorldContextObject, ESBZEquippableLoadoutSlot EquippableSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSBZWeaponInventorySlot GetWeaponConfigSlot(const UObject* WorldContextObject, ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZInventoryBaseData* GetSuitData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZInventoryBaseData* GetMaskData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventorySuitSlotAt(const UObject* WorldContextObject, FSBZSuitInventorySlot& OutSuitInventorySlot, int32 SuitSlotIndex, bool& IsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventoryGloveSlotAt(const UObject* WorldContextObject, FSBZGloveInventorySlot& OutGloveInventorySlot, int32 GloveSlotIndex, bool& IsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZInventoryBaseData* GetGloveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetActivePlayerLoadoutIndex(const UObject* WorldContextObject);
    
};

