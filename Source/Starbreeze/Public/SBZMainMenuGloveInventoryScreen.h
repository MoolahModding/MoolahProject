#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMetaRequestResult.h"
#include "SBZButtonControlReference.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZMenuStackInventoryBaseScreen.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuGloveInventoryScreen.generated.h"

class UPanelWidget;
class USBZBaseInventoryItemVisualsWidget;
class USBZInventoryDefaultButton;
class USBZMainMenuInventoryGloveSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuGloveInventoryScreen : public USBZMenuStackInventoryBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventoryGloveSlotButton> GloveSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_GloveSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_BuySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInventoryDefaultButton* Button_DefaultGlove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBaseInventoryItemVisualsWidget> DiscardGlovePopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DiscardGlovePopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardGlovePopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardGlovePopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GloveIndexToDiscard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* DiscardGlovePopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryGloveSlotButton* ActiveGloveSlotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuInventoryGloveSlotButton*> GloveSlotButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInventorySlotStoreItem SlotItem;
    
public:
    USBZMainMenuGloveInventoryScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void TryDiscardGloveInSlot(int32 InGloveIndex);
    
private:
    UFUNCTION()
    void RefreshWidgetVisuals();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTryBuyGloveSlot();
    
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
    void OnDiscardGlovePopUpClosed(FName ClosingActionName);
    
    UFUNCTION()
    void OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId);
    
    UFUNCTION()
    void NativeOnGloveSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnGloveDefaultButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnDefaultSet(ESBZMetaRequestResult Result);
    
    UFUNCTION()
    void NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeGloveSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void GloveSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
private:
    UFUNCTION()
    void DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanDiscardGloveInSlot(int32 IndexToDiscard) const;
    
};

