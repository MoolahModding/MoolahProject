#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuWeaponInventoryWidget.generated.h"

class UPanelWidget;
class USBZMainMenuLoadoutWeaponSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponInventoryWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuLoadoutWeaponSlotButton> WeaponSlotButtonClass;
    
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponSlotsUpdated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponSlotButtonSelected(USBZMenuButton* SelectedButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponInSlotDiscarded(bool bIsWeaponDiscarded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponConfigSlotCountChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlotStoreItemSet(FSBZInventorySlotStoreItem InSlotStoreItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBuyWeaponConfigSlotDone(bool bWasSuccess);
    
private:
    UFUNCTION()
    void NativeOnWeaponSlotButtonSelected(USBZMenuButton* SelectedButton);
    
protected:
    UFUNCTION()
    void NativeOnBuyWeaponConfigSlotDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetSlotPrice() const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetActiveWeaponSlotIndex() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InLoadoutIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DiscardWeaponInSlot(int32 SlotIndex);
    
private:
    UFUNCTION()
    void DiscardItemDone(ESBZMetaRequestResult BuyItemResult, FGuid ItemId);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanDiscardWeaponIndex(int32 IndexToDiscard) const;
    
};

