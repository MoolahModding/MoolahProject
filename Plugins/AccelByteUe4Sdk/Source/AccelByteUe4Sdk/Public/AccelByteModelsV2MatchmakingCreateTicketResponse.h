#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingCreateTicketResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingCreateTicketResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchTicketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueueTime;
    
    FAccelByteModelsV2MatchmakingCreateTicketResponse();
};

