#pragma once
#include "CoreMinimal.h"
#include "SBZGloveInventorySlot.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuInventoryGloveSlotButton.generated.h"

class USBZGloveData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryGloveSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZGloveInventorySlot GloveSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GloveSlotIndex;
    
public:
    USBZMainMenuInventoryGloveSlotButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveGloveSlot(bool bIsActiveGloveSlot);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGloveSlotInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeGloveSlot(int32 InGloveSlotIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetGloveSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    USBZGloveData* GetGloveInSlot() const;
    
};

