#include "ABCatalog.h"

UABCatalog::UABCatalog() {
}

void UABCatalog::SearchItem(const FString& Language, const FString& Keyword, const int32& Offset, const int32& Limit, const FString& Region, FDModelsItemPagingSlicedResultResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetRootCategories(const FString& Language, FDArrayModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetItemsByCriteria(const FAccelByteModelsItemCriteria& ItemCriteria, const int32& Offset, const int32& Limit, TArray<EAccelByteItemListSortBy> SortBy, FDModelsItemPagingSlicedResultResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetItemDynamicData(const FString& ItemId, FDModelsItemDynamicDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetItemById(const FString& ItemId, const FString& Language, const FString& Region, const FString& StoreId, bool bPopulateBundle, FDModelsPopulatedItemInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetItemByAppId(const FString& AppId, const FString& Language, const FString& Region, FDModelsItemInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetDescendantCategories(const FString& CategoryPath, const FString& Language, FDArrayModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetChildCategories(const FString& CategoryPath, const FString& Language, FDArrayModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABCatalog::GetCategory(const FString& CategoryPath, const FString& Language, FDModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError) {
}


