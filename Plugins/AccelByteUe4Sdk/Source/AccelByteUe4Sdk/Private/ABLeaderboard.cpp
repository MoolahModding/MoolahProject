#include "ABLeaderboard.h"

void UABLeaderboard::GetUserRankingV3(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataV3& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetUserRanking(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetRankingsV3(const FString& LeaderboardCode, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetRankings(const FString& LeaderboardCode, const EAccelByteLeaderboardTimeFrame& TimeFrame, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetRankingByCycle(const FString& LeaderboardCode, const FString& CycleId, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetLeaderboards(int32 Offset, int32 Limit, const FDModelsPaginatedLeaderboardData& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetBulkUserRankingV3(const TArray<FString>& UserIds, const FString& LeaderboardCode, const FDModelsBulkUserRankingDataV3& OnSuccess, const FDErrorHandler& OnError) {
}

UABLeaderboard::UABLeaderboard() {
}

