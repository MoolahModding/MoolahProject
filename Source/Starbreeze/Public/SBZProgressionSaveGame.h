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
    UFUNCTION(BlueprintPure)
    TArray<FSBZWeaponInventorySlot> GetWeaponInventorySlotArray(ESBZEquippableLoadoutSlot EquippableSlot) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZSuitInventorySlot> GetUncheckedSuitInventorySlotArray() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZMaskInventorySlot> GetUncheckedMaskInventorySlotArray() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZGloveInventorySlot> GetUncheckedGloveInventorySlotArray() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZSuitInventorySlot> GetSuitInventorySlotArray() const;
    
    UFUNCTION(BlueprintPure)
    FSBZPlayerCosmeticsConfig GetPlayerCosmeticsConfigArrayForPlatform();
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZMaskInventorySlot> GetMaskInventorySlotArray() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZGloveInventorySlot> GetGloveInventorySlotArray() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

