#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuWeaponInventoryWidget.generated.h"

class UClass;
class UPanelWidget;
class USBZMainMenuLoadoutWeaponSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponInventoryWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WeaponSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_WeaponSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInventorySlotStoreItem SlotStoreItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveWeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LoadoutSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveLoadoutActiveWeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuLoadoutWeaponSlotButton*> WeaponSlotButtonPool;
    
public:
    USBZMainMenuWeaponInventoryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponSlotButtons();
    
    UFUNCTION(BlueprintCallable)
    void UpdateActiveWeaponSlotIndex(int32 InNewIndex);
    
    UFUNCTION(BlueprintCallable)
    void TryBuyItemSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSlotsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSlotButtonSelected(USBZMenuButton* SelectedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponConfigSlotCountChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotStoreItemSet(FSBZInventorySlotStoreItem InSlotStoreItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuyWeaponConfigSlotDone(bool bWasSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnWeaponSlotButtonSelected(USBZMenuButton* SelectedButton);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnBuyWeaponConfigSlotDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotPrice() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWeaponSlotIndex() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InLoadoutIndex);
    
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

