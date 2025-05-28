#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLeaderboardRankingResult.h"
#include "DModelsLeaderboardRankingResultResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsLeaderboardRankingResultResponse, FAccelByteModelsLeaderboardRankingResult, Response);

