#pragma once
#include "CoreMinimal.h"
#include "SBZRewardCategory.h"
#include "SBZInfamyRewardConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZInfamyRewardConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRewardCategory> RewardCategoryArray;
    
    STARBREEZE_API FSBZInfamyRewardConfiguration();
};

