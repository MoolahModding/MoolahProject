#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZGloveInventorySlot.h"
#include "SBZMaskInventorySlot.h"
#include "SBZPlayerCosmeticsConfig.h"
#include "SBZProgressionSaveGameData.h"
#include "SBZProgressionSaveGameInterface.h"
#include "SBZSaveGame.h"
#include "SBZSuitInventorySlot.h"
#include "SBZWeaponInventorySlot.h"
#include "SBZProgressionSaveGame.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZProgressionSaveGame : public USBZSaveGame, public ISBZProgressionSaveGameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZProgressionSaveGameData ProgressionSaveGameData;
    
public:
    USBZProgressionSaveGame();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZWeaponInventorySlot> GetWeaponInventorySlotArray(ESBZEquippableLoadoutSlot EquippableSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZSuitInventorySlot> GetUncheckedSuitInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZMaskInventorySlot> GetUncheckedMaskInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZGloveInventorySlot> GetUncheckedGloveInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZSuitInventorySlot> GetSuitInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZPlayerCosmeticsConfig GetPlayerCosmeticsConfigArrayForPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZMaskInventorySlot> GetMaskInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZGloveInventorySlot> GetGloveInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedWeaponInventorySlotIndex(const int32 LoadoutIndex, ESBZEquippableLoadoutSlot ItemSlot) const;
    

    // Fix for true pure virtual functions not being implemented
};

