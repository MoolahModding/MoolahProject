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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LifetimeAmount;
    
public:
    STARBREEZE_API FSBZCurrency();
};

