#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCycleRank.h"
#include "AccelByteModelsUserRankingV3.h"
#include "AccelByteModelsUserRankingDataV3.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsUserRankingDataV3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsUserRankingV3 AllTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCycleRank> Cycles;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsUserRankingDataV3();
};

