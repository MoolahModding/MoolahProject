#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsLeaderboardRankingResultResponseDelegate.h"
#include "DModelsUserRankingDataResponseDelegate.h"
#include "EAccelByteLeaderboardTimeFrame.h"
#include "ABLeaderboard.generated.h"

UCLASS(Blueprintable)
class UABLeaderboard : public UObject {
    GENERATED_BODY()
public:
    UABLeaderboard();

    UFUNCTION(BlueprintCallable)
    void GetUserRanking(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRankings(const FString& LeaderboardCode, const EAccelByteLeaderboardTimeFrame& TimeFrame, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

