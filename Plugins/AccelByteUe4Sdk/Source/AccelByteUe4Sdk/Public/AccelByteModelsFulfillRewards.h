#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsPlatformReward.h"
#include "EAccelBytePlatformRewardOrigin.h"
#include "EAccelBytePlatformRewardSource.h"
#include "AccelByteModelsFulfillRewards.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsFulfillRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPlatformReward> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelBytePlatformRewardSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelBytePlatformRewardOrigin Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Metadata;
    
    FAccelByteModelsFulfillRewards();
};

