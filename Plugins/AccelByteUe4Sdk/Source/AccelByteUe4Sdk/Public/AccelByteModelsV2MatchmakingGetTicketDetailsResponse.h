#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingGetTicketDetailsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingGetTicketDetailsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    FAccelByteModelsV2MatchmakingGetTicketDetailsResponse();
};

