#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnMetaRequestResultAndItemIdBluePrintDelegateDelegate.h"
#include "SBZBuyItemCallbackProxy.generated.h"

class UObject;
class USBZBuyItemCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBuyItemCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMetaRequestResultAndItemIdBluePrintDelegate OnComplete;
    
    USBZBuyItemCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZBuyItemCallbackProxy* BuyItem(UObject* WorldContextObject, FGuid ItemId, int32 Price, int32 DiscountedPrice, int32 Quantity, const FString& CurrencyCode);
    
};

