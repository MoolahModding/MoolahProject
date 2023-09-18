#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLoadoutSlot.h"
#include "OnActiveItemChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuItemSlotInventoryWidget.generated.h"

class UClass;
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
    UClass* ItemSlotButtonClass;
    
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSlotsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSlotScreenDisplayed();
    
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

