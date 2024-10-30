#pragma once
#include "CoreMinimal.h"
#include "ESBZCurrencyCode.h"
#include "SBZCurrency.generated.h"

USTRUCT(BlueprintType)
struct FSBZCurrency {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCurrencyCode CurrencyType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LifetimeAmount;
    
public:
    STARBREEZE_API FSBZCurrency();
};

