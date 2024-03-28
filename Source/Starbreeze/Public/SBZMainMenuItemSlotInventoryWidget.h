#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLoadoutSlot.h"
#include "OnActiveItemChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuItemSlotInventoryWidget.generated.h"

class UPanelWidget;
class USBZInventoryBaseData;
class USBZMainMenuInventoryItemSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuItemSlotInventoryWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveItemChanged OnActiveItemSlotChanged;
    
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
    USBZMainMenuItemSlotInventoryWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSlotsUpdated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSlotScreenDisplayed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSlotButtonSelected(USBZMenuButton* SelectedButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSlotButtonFocusedChanged(USBZMenuButton* SelectedButton, bool bIsFocused);
    
private:
    UFUNCTION()
    void NativeOnItemSlotButtonSelected(USBZMenuButton* SelectedButton);
    
public:
    UFUNCTION(BlueprintPure)
    USBZInventoryBaseData* GetActiveItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisplayItemSlotScreen(ESBZItemLoadoutSlot InItemSlotType, USBZInventoryBaseData* InActiveItem);
    
};

