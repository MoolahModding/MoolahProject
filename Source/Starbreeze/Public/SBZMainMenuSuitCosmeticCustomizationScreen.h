#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlReference.h"
#include "SBZCosmeticPanelDefaultParams.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuSuitCosmeticCustomizationScreen.generated.h"

class USBZBaseInventoryItemVisualsWidget;
class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZMainMenuCosmeticItemButton;
class USBZMainMenuCosmeticPanel;
class USBZSuitPartConfig;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuSuitCosmeticCustomizationScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCosmeticPanel* Widget_CosmeticPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSuitPartConfig* SuitPartConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* CosmeticPartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuitSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCosmeticPanelDefaultParams DefaultButtonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBaseInventoryItemVisualsWidget> PopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpCancelAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* PreviousEquippedConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInventoryItemVisualsWidget* PopUpBody;
    
public:
    USBZMainMenuSuitCosmeticCustomizationScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnPopUpClosed(FName ClosingActionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquippedItemChanged(const USBZCosmeticsDataAsset* InEquippedItem);
    
private:
    UFUNCTION(BlueprintCallable)
    void CosmeticPanelDefaultButtonSelected();
    
    UFUNCTION(BlueprintCallable)
    void CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton);
    
};

