#include "ABStatistic.h"

void UABStatistic::IncrementUserStatItems(const TArray<FAccelByteModelsBulkStatItemInc>& Data, const FDArrayModelsBulkStatItemOperationResultResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABStatistic::GetUserStatItems(const TArray<FString>& StatCodes, const TArray<FString>& Tags, const FDModelsUserStatItemPagingSlicedResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy) {
}

void UABStatistic::GetGlobalStatItemsByStatCode(const FString& StatCode, const FDModelsGlobalStatItemDelegate& OnSuccess, const FDErrorHandler& OnError) {
}

void UABStatistic::GetAllUserStatItems(const FDModelsUserStatItemPagingSlicedResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy) {
}

void UABStatistic::CreateUserStatItems(const TArray<FString>& StatCodes, const FDArrayModelsBulkStatItemOperationResultResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABStatistic::BulkFetchStatItemsValue(const FString& StatCode, const TArray<FString>& UserIds, const FDModelsStatItemValueResponses& OnSuccess, const FDErrorHandler& OnError) {
}

UABStatistic::UABStatistic() {
}

