#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkUserRankingDataValueV3.h"
#include "AccelByteModelsBulkUserRankingDataV3.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsBulkUserRankingDataV3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsBulkUserRankingDataValueV3> Data;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsBulkUserRankingDataV3();
};

