#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DArrayModelsCurrencyListResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "EAccelByteCurrencyType.h"
#include "ABCurrency.generated.h"

UCLASS(Blueprintable)
class UABCurrency : public UObject {
    GENERATED_BODY()
public:
    UABCurrency();
    UFUNCTION(BlueprintCallable)
    void GetCurrencyList(FDArrayModelsCurrencyListResponse OnSuccess, FDErrorHandler OnError, EAccelByteCurrencyType CurrencyType);
    
};

