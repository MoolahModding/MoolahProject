#pragma once
#include "CoreMinimal.h"
#include "SBZCurrency.h"
#include "SBZPlayerCurrencyBalanceData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerCurrencyBalanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCurrency Cash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCurrency Gold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCurrency Credit;
    
    STARBREEZE_API FSBZPlayerCurrencyBalanceData();
};

