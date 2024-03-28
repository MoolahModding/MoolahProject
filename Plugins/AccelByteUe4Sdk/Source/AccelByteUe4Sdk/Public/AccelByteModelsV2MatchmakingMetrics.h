#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingMetrics.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueueTime;
    
    FAccelByteModelsV2MatchmakingMetrics();
};

