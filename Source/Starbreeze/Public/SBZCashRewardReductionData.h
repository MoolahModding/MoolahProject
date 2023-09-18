#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardReductionType.h"
#include "SBZCashRewardReductionData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCashRewardReductionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReductionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReductionCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRewardReductionType ReductionType;
    
    STARBREEZE_API FSBZCashRewardReductionData();
};

