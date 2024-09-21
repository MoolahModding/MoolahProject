#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLoadoutSlot.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuItemInventoryWidget.generated.h"

class UPanelWidget;
class USBZInventoryBaseData;
class USBZMainMenuInventoryItemSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuItemInventoryWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventoryItemSlotButton> ItemSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ItemSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemLoadoutSlot ItemSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* SelectedItemButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuInventoryItemSlotButton*> ItemSlotButtonPool;
    
public:
    USBZMainMenuItemInventoryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSlotsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSlotButtonSelected(USBZMenuButton* SelectedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnItemSlotButtonSelected(USBZMenuButton* SelectedButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryBaseData* GetActiveItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisplayItemSlotScreen(ESBZItemLoadoutSlot InItemSlotType, USBZInventoryBaseData* InActiveItem);
    
};

