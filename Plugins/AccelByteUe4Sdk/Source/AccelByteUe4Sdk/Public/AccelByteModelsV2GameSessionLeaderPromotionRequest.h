#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionLeaderPromotionRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionLeaderPromotionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderID;
    
    FAccelByteModelsV2GameSessionLeaderPromotionRequest();
};

