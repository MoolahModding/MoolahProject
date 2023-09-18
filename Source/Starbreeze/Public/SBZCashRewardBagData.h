#pragma once
#include "CoreMinimal.h"
#include "SBZCashRewardBagData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCashRewardBagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CashDifference;
    
    STARBREEZE_API FSBZCashRewardBagData();
};

