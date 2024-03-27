#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsCurrencyList.h"
#include "EAccelByteCurrencyType.h"
#include "AccelByteBlueprintsCurrency.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsCurrency : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetCurrencyListSuccess, const TArray<FAccelByteModelsCurrencyList>&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsCurrency();
    UFUNCTION(BlueprintCallable)
    static void GetCurrencyList(const FString& Namespace, const UAccelByteBlueprintsCurrency::FGetCurrencyListSuccess& OnSuccess, const UAccelByteBlueprintsCurrency::FBlueprintErrorHandler& OnError, EAccelByteCurrencyType CurrencyType);
    
};

