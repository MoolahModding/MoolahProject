#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLoadoutSlot.h"
#include "ESBZMetaRequestResult.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuItemInventoryScreen.generated.h"

class UPanelWidget;
class USBZInventoryBaseData;
class USBZMainMenuInventoryItemSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuItemInventoryScreen : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventoryItemSlotButton> ItemSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ItemSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemLoadoutSlot ItemSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryItemSlotButton* SelectedItemButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuInventoryItemSlotButton*> ItemSlotButtonPool;
    
public:
    USBZMainMenuItemInventoryScreen();
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
    
    UFUNCTION()
    void HandleProgressionSave(ESBZMetaRequestResult Result);
    
public:
    UFUNCTION(BlueprintPure)
    USBZInventoryBaseData* GetActiveItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisplayItemInventoryScreen(int32 InLoadoutIndex, ESBZItemLoadoutSlot InItemSlotType);
    
};

