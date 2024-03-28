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
    UFUNCTION(BlueprintImplementableEvent)
    void OnSuitSlotInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPresetSuitSlot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSuitSlot(int32 InSuitSlotIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetSuitSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    FSBZSuitConfig GetSuitInSlotConfig() const;
    
    UFUNCTION(BlueprintPure)
    USBZSuitData* GetSuitInSlot() const;
    
};

