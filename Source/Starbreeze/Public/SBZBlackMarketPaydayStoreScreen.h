#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZPayDayCreditStoreItem.h"
#include "Templates/SubclassOf.h"
#include "SBZBlackMarketPaydayStoreScreen.generated.h"

class UPanelWidget;
class USBZBlackMarketStoreRealMoneyItemButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketPaydayStoreScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBlackMarketStoreRealMoneyItemButton> RealMoneyStoreItemButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPayDayCreditStoreItem> PaydayCreditStoreItems;
    
public:
    USBZBlackMarketPaydayStoreScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVendorItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealMoneyPurchaseWindowClosed(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealMoneyItemsInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnRealMoneyItemButtonSelected(USBZMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnBuyRealMoneyItemPurchaseCompleted(ESBZMetaRequestResult Result);
    
};

