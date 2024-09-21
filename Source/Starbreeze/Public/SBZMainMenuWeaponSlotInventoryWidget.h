#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "OnActiveWeaponSlotChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuWeaponSlotInventoryWidget.generated.h"

class UPanelWidget;
class USBZBlackMarketStoreItemButton;
class USBZInventoryBaseData;
class USBZMainMenuLoadoutWeaponSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponSlotInventoryWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWeaponSlotChanged OnActiveWeaponSlotChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuLoadoutWeaponSlotButton> WeaponSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_WeaponSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuLoadoutWeaponSlotButton*> WeaponSlotButtonPool;
    
public:
    USBZMainMenuWeaponSlotInventoryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveWeaponSlotIndex(int32 InNewIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSlotScreenDisplayed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnWeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnWeaponSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InSetActiveWeaponIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DiscardWeaponInSlot(int32 SlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void DiscardItemDone(ESBZMetaRequestResult BuyItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDiscardWeaponIndex(int32 IndexToDiscard) const;
    
};

