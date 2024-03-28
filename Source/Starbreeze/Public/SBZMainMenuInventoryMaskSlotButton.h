#pragma once
#include "CoreMinimal.h"
#include "SBZMaskInventorySlot.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuInventoryMaskSlotButton.generated.h"

class USBZMaskData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryMaskSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZMaskInventorySlot MaskSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaskSlotIndex;
    
public:
    USBZMainMenuInventoryMaskSlotButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveMaskSlot(bool bIsActiveMaskSlot);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMaskSlotInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPresetMaskSlot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreconfigMaskSlot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeMaskSlot(int32 InMaskSlotIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaskSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    FSBZMaskInventorySlot GetMaskSlot() const;
    
    UFUNCTION(BlueprintPure)
    USBZMaskData* GetMaskInSlot() const;
    
};

