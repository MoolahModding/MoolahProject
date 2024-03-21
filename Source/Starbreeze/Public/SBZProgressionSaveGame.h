#pragma once
#include "CoreMinimal.h"
#include "SBZGloveInventorySlot.h"
#include "SBZMaskInventorySlot.h"
#include "SBZProgressionSaveGameData.h"
#include "SBZProgressionSaveGameInterface.h"
#include "SBZSaveGame.h"
#include "SBZSuitInventorySlot.h"
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
    TArray<FSBZSuitInventorySlot> GetSuitInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZMaskInventorySlot> GetMaskInventorySlotArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZGloveInventorySlot> GetGloveInventorySlotArray() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

