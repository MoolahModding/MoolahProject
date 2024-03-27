#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsUserPoint.h"
#include "AccelByteModelsLeaderboardRankingResultV3.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLeaderboardRankingResultV3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserPoint> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsLeaderboardRankingResultV3();
};

