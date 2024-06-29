#pragma once
#include "CoreMinimal.h"
#include "SBZRewardCategory.h"
#include "SBZRenownRewardConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZRenownRewardConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRewardCategory> RewardCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfamyPointsForReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRenownLevel;
    
    STARBREEZE_API FSBZRenownRewardConfiguration();
};

