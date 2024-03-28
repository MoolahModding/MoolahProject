#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRankingDataV3.h"
#include "AccelByteModelsBulkUserRankingDataValueV3.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsBulkUserRankingDataValueV3 : public FAccelByteModelsUserRankingDataV3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsBulkUserRankingDataValueV3();
};

