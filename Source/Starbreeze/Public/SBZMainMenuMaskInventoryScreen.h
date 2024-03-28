#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMetaRequestResult.h"
#include "SBZButtonControlReference.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZMenuStackInventoryBaseScreen.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuMaskInventoryScreen.generated.h"

class UPanelWidget;
class USBZBaseInventoryItemVisualsWidget;
class USBZCosmeticsPartSlot;
class USBZInventoryDefaultButton;
class USBZMainMenuInventoryMaskSlotButton;
class USBZMaskData;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuMaskInventoryScreen : public USBZMenuStackInventoryBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventoryMaskSlotButton> MaskSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_MaskSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_BuySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInventoryDefaultButton* Button_DefaultMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBaseInventoryItemVisualsWidget> DiscardMaskPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DiscardMaskPopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardMaskPopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardMaskPopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* CustomizableMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* MaskMould;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryMaskSlotButton* ActiveMaskSlotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaskIndexToDiscard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* DiscardMaskPopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuInventoryMaskSlotButton*> MaskSlotButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInventorySlotStoreItem SlotItem;
    
public:
    USBZMainMenuMaskInventoryScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void TryDiscardMaskInSlot(int32 InMaskIndex);
    
private:
    UFUNCTION()
    void RefreshWidgetVisuals();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTryBuyMaskSlot();
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEditButtonPressed(int32 MaskSlotIndex);
    
private:
    UFUNCTION()
    void OnDiscardMaskPopUpClosed(FName ClosingActionName);
    
    UFUNCTION()
    void OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId);
    
    UFUNCTION()
    void NativeOnMaskSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnMaskSlotButtonAltSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnMaskDefaultButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnDefaultSet(ESBZMetaRequestResult Result);
    
    UFUNCTION()
    void NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeMaskSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void MaskSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
private:
    UFUNCTION()
    void DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanDiscardMaskInSlot(int32 InMaskIndex) const;
    
};

