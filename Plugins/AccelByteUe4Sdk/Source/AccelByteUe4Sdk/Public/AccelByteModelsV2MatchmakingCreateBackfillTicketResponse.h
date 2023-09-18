#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingCreateBackfillTicketResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingCreateBackfillTicketResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Id;
    
    FAccelByteModelsV2MatchmakingCreateBackfillTicketResponse();
};

