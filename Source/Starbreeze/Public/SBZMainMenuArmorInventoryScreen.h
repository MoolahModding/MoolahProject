#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMetaRequestResult.h"
#include "SBZButtonControlReference.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZMenuStackInventoryBaseScreen.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuArmorInventoryScreen.generated.h"

class UPanelWidget;
class USBZArmorData;
class USBZBaseInventoryItemVisualsWidget;
class USBZMainMenuArmorSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuArmorInventoryScreen : public USBZMenuStackInventoryBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuArmorSlotButton> ArmorSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ArmorSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_BuySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBaseInventoryItemVisualsWidget> DiscardArmorPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DiscardArmorPopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardArmorPopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardArmorPopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZArmorData* CustomizableArmorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuArmorSlotButton* ActiveArmorSlotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorIndexToDiscard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* DiscardArmorPopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuArmorSlotButton*> ArmorSlotButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInventorySlotStoreItem SlotItem;
    
public:
    USBZMainMenuArmorInventoryScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void TryDiscardArmorInSlot(int32 InArmorIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshWidgetVisuals();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTryBuyArmorSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotPurchaseComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotPriceChanged(const FSBZInventorySlotStoreItem& Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShowBuySlotPopUpClosed(FName InActionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDiscarded(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEditButtonPressed(int32 ArmorSlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDiscardArmorPopUpClosed(FName ClosingActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnBuySlotItemCompleted(ESBZMetaRequestResult Result, const FString& ItemSku);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnArmorSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnArmorSlotButtonAltSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeArmorSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDiscardArmorInSlot(int32 InArmorIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ArmorSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
};

