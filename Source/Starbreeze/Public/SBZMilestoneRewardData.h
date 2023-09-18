#pragma once
#include "CoreMinimal.h"
#include "SBZMilestoneRewardData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMilestoneRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MilestoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MilestoneRewardRatio;
    
    STARBREEZE_API FSBZMilestoneRewardData();
};

