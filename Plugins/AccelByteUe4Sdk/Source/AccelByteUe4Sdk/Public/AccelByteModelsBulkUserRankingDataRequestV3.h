#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkUserRankingDataRequestV3.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsBulkUserRankingDataRequestV3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsBulkUserRankingDataRequestV3();
};

