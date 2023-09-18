#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2PartyLeaderPromotionRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyLeaderPromotionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderID;
    
    FAccelByteModelsV2PartyLeaderPromotionRequest();
};

