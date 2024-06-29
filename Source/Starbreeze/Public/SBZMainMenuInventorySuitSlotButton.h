#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZSuitConfig.h"
#include "SBZSuitInventorySlot.h"
#include "SBZMainMenuInventorySuitSlotButton.generated.h"

class USBZSuitData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventorySuitSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSuitInventorySlot SuitSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuitSlotIndex;
    
public:
    USBZMainMenuInventorySuitSlotButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveSuitSlot(bool bIsActiveSuitSlot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuitSlotInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresetSuitSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSuitSlot(int32 InSuitSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSuitSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZSuitConfig GetSuitInSlotConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZSuitData* GetSuitInSlot() const;
    
};

