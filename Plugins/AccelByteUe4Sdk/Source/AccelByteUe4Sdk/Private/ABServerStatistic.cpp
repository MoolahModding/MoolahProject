#include "ABServerStatistic.h"

void UABServerStatistic::IncrementUserStatItems(const FString& UserId, const TArray<FAccelByteModelsBulkStatItemInc>& Data, FDArrayBulkStatItemOperationDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerStatistic::IncrementManyUsersStatItems(const TArray<FAccelByteModelsBulkUserStatItemInc>& Data, FDArrayBulkStatItemOperationDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerStatistic::GetUserStatItems(const FString& UserId, const TArray<FString>& StatCodes, const TArray<FString>& Tags, FDUserStatItemPagingSlicedDelegate OnSuccess, FDErrorHandler OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy) {
}

void UABServerStatistic::GetGlobalStatItemsByStatCode(const FString& StatCode, FDGlobalStatItemDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerStatistic::GetAllUserStatItems(const FString& UserId, FDUserStatItemPagingSlicedDelegate OnSuccess, FDErrorHandler OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy) {
}

void UABServerStatistic::CreateUserStatItems(const FString& UserId, const TArray<FString>& StatCodes, FDArrayBulkStatItemOperationDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerStatistic::BulkFetchStatItemsValue(const FString& StatCode, const TArray<FString>& UserIds, FDFetchUserStatistic OnSuccess, FDErrorHandler OnError) {
}

UABServerStatistic::UABServerStatistic() {
}

