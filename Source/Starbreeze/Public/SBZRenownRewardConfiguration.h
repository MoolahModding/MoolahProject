#pragma once
#include "CoreMinimal.h"
#include "SBZRenownRewardCategory.h"
#include "SBZRenownRewardConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZRenownRewardConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRenownRewardCategory> RenownRewardCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfamyPointsForReward;
    
    STARBREEZE_API FSBZRenownRewardConfiguration();
};

