#pragma once
#include "CoreMinimal.h"
#include "SBZStoreItemUIData.h"
#include "SBZWidgetBase.h"
#include "SBZBlackMarketConfirmationPopupBody.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketConfirmationPopupBody : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUIData StoreItemUIData;
    
public:
    USBZBlackMarketConfirmationPopupBody();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDataInitialized();
    
};

