#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DAccelByteModelsFulfillmentResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "ABFulfillment.generated.h"

UCLASS(Blueprintable)
class UABFulfillment : public UObject {
    GENERATED_BODY()
public:
    UABFulfillment();

    UFUNCTION(BlueprintCallable)
    void RedeemCode(const FString& Code, const FString& Region, const FString& Language, FDAccelByteModelsFulfillmentResponse OnSuccess, FDErrorHandler OnError);
    
};

