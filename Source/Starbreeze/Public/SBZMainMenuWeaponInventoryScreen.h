#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZButtonControlReference.h"
#include "SBZMenuStackInventoryBaseScreen.h"
#include "SBZMainMenuWeaponInventoryScreen.generated.h"

class UClass;
class UPanelWidget;
class USBZBaseInventoryItemVisualsWidget;
class USBZBlackMarketStoreItemButton;
class USBZInventoryBaseData;
class USBZMainMenuLoadoutWeaponSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponInventoryScreen : public USBZMenuStackInventoryBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WeaponSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_WeaponSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveWeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveLoadoutWeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBlackMarketStoreItemButton* Button_WeaponSlotStoreItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DiscardWeaponPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DiscardWeaponPopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardWeaponPopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference DiscardWeaponPopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponToDiscardIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* DiscardWeaponPopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuLoadoutWeaponSlotButton*> WeaponSlotButtonPool;
    
public:
    USBZMainMenuWeaponInventoryScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveWeaponSlotIndex(int32 InNewIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool TryDiscardWeaponInIndex(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void TryBuyWeaponSlot(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSlotScreenDisplayed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTryBuyWeaponSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnShowBuySlotPopUpClosed(FName InActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewSlotPurchased();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDiscardWeaponPopUpClosed(FName ClosingActionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuyWeaponSlotTransactionFailed(ESBZMetaRequestResult Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBuyWeaponSlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveWeaponChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnWeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnWeaponSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleProgressionSave(ESBZMetaRequestResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponInventoryScreen(int32 InLoadoutIndex, ESBZEquippableLoadoutSlot InEquippableSlot);
    
private:
    UFUNCTION(BlueprintCallable)
    void DiscardItemDone(ESBZMetaRequestResult BuyItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDiscardWeaponIndex(int32 InWeaponIndex) const;
    
};

