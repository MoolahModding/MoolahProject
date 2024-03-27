#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsV2MatchmakingTicketStatus.h"
#include "AccelByteModelsV2MatchmakingTicketStatuses.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingTicketStatuses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2MatchmakingTicketStatus> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Pagination;
    
    FAccelByteModelsV2MatchmakingTicketStatuses();
};

