#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLeaderboardData.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPaginatedLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsPaginatedLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsLeaderboardData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedLeaderboardData();
};

