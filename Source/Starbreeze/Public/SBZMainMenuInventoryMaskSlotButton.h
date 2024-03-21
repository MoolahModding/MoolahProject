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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaskSlotInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresetMaskSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreconfigMaskSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeMaskSlot(int32 InMaskSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaskSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZMaskInventorySlot GetMaskSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZMaskData* GetMaskInSlot() const;
    
};

