#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQueryRewardPaging.h"
#include "AccelByteModelsRewardInfo.h"
#include "AccelByteModelsQueryReward.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsQueryReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsRewardInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsQueryRewardPaging Paging;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsQueryReward();
};

