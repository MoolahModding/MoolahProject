#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZCurrencyCode.h"
#include "SBZMenuButton.h"
#include "SBZStoreItemUIData.h"
#include "SBZBlackMarketStoreItemButton.generated.h"

class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketStoreItemButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUIData StoreItemUIData;
    
public:
    USBZBlackMarketStoreItemButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStoreItemDataIntialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransactionInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeStoreData(const FSBZStoreItemUIData& InStoreItemUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetItemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryBaseData* GetItemData() const;
    
    UFUNCTION(BlueprintCallable)
    void GetItemCost(int32& Price, ESBZCurrencyCode& Currency);
    
};

