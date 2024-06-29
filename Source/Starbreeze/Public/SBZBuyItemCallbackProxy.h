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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZBuyItemCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZBuyItemCallbackProxy* BuyItem(UObject* NewWorldContextObject, FGuid ItemId, int32 Price, int32 DiscountedPrice, int32 Quantity, const FString& CurrencyCode);
    
};

