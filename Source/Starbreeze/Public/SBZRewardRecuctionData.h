#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardReductionType.h"
#include "SBZRewardRecuctionData.generated.h"

USTRUCT(BlueprintType)
struct FSBZRewardRecuctionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRewardReductionType RewardReductionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReductionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxReductionPercentage;
    
    STARBREEZE_API FSBZRewardRecuctionData();
};

