#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZArmorInventorySlot.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuLoadoutArmorSlotButton.generated.h"

class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuLoadoutArmorSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZArmorInventorySlot ArmorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorSlotIndex;
    
public:
    USBZMainMenuLoadoutArmorSlotButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveArmorSlot(bool bIsActiveArmorSlot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorSlotInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeArmorSlot(int32 InArmorSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEntitlementAndArmorID(FGuid& EntitlementID, FGuid& ItemID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZArmorInventorySlot GetArmorSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryBaseData* GetArmorInventoryData() const;
    
};

