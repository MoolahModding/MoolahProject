#pragma once
#include "CoreMinimal.h"
#include "SBZBlackMarketStoreItemButton.h"
#include "SBZPayDayCreditStoreItem.h"
#include "SBZBlackMarketStoreRealMoneyItemButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketStoreRealMoneyItemButton : public USBZBlackMarketStoreItemButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPayDayCreditStoreItem RealMoneyStoreItem;
    
public:
    USBZBlackMarketStoreRealMoneyItemButton();
    UFUNCTION(BlueprintCallable)
    void InitializeRealMoneyStoreItem(const FSBZPayDayCreditStoreItem& InRealMoneyStoreItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZPayDayCreditStoreItem GetRealMoneyStoreItem();
    
};

