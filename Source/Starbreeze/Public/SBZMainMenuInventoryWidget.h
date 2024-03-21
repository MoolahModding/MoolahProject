#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuInventoryWidget.generated.h"

class USBZBlackMarketStoreItemButton;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBlackMarketStoreItemButton* Button_LoadoutSlotStoreItem;
    
public:
    USBZMainMenuInventoryWidget();
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnLoadoutSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadoutSlotStorePurchased(bool bWasSuccessful);
    
};

