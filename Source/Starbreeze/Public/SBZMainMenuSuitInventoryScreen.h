#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMetaRequestResult.h"
#include "SBZButtonControlReference.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZMenuStackInventoryBaseScreen.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuSuitInventoryScreen.generated.h"

class UPanelWidget;
class USBZBaseInventoryItemVisualsWidget;
class USBZInventoryDefaultButton;
class USBZMainMenuInventorySuitSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuSuitInventoryScreen : public USBZMenuStackInventoryBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventorySuitSlotButton> SuitSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_SuitSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_BuySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInventoryDefaultButton* Button_DefaultSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBaseInventoryItemVisualsWidget> DiscardSuitPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DiscardSuitPopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardSuitPopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardSuitPopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuitIndexToDiscard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* DiscardSuitPopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventorySuitSlotButton* ActiveSuitSlotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuInventorySuitSlotButton*> SuitSlotButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInventorySlotStoreItem SlotItem;
    
public:
    USBZMainMenuSuitInventoryScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void TryDiscardSuitInSlot(int32 InSuitIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuitSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
private:
    UFUNCTION()
    void RefreshWidgetVisuals();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTryBuySuitSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlotPurchaseComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlotPriceChanged(const FSBZInventorySlotStoreItem& Item);
    
private:
    UFUNCTION()
    void OnShowBuySlotPopUpClosed(FName InActionName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemDiscarded(bool bWasSuccessful);
    
private:
    UFUNCTION()
    void OnDiscardSuitPopUpClosed(FName ClosingActionName);
    
    UFUNCTION()
    void OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId);
    
    UFUNCTION()
    void NativeSuitSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
    UFUNCTION()
    void NativeOnSuitSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnSuitDefaultButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnDefaultSet(ESBZMetaRequestResult Result);
    
    UFUNCTION()
    void NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanDiscardSuitInSlot(int32 IndexToDiscard) const;
    
};

