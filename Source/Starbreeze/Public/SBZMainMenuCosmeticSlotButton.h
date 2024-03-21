#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuCosmeticSlotButton.generated.h"

class USBZCosmeticsPartSlot;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuCosmeticSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* PartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* ItemInSlot;
    
public:
    USBZMainMenuCosmeticSlotButton();
    UFUNCTION(BlueprintCallable)
    void SetItemInSlot(const USBZInventoryBaseData* InItemBaseData);
    
    UFUNCTION(BlueprintCallable)
    void SetCosmeticPartSlot(const USBZCosmeticsPartSlot* InCosmeticPartSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemInSlotChanged(const USBZInventoryBaseData* InItemBaseData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeButton(const USBZCosmeticsPartSlot* InCosmeticPartSlot, const USBZInventoryBaseData* InItemBaseData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticPartSlotChanged(const USBZCosmeticsPartSlot* InCosmeticPartSlot);
    
};

