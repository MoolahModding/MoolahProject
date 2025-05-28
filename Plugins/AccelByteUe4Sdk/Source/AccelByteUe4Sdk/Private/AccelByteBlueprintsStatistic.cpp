#include "AccelByteBlueprintsStatistic.h"

UAccelByteBlueprintsStatistic::UAccelByteBlueprintsStatistic() {
}

void UAccelByteBlueprintsStatistic::IncrementUserStatItems(const TArray<FAccelByteModelsBulkStatItemInc>& Data, const UAccelByteBlueprintsStatistic::FBulkAddUserStatItemValueSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsStatistic::GetUserStatItems(const TArray<FString>& StatCodes, const TArray<FString>& Tags, const UAccelByteBlueprintsStatistic::FGetUserStatItemsSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsStatistic::GetGlobalStatItemsByStatCode(const FString& StatCode, const UAccelByteBlueprintsStatistic::FGlobalStatItemDelegate& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsStatistic::GetAllUserStatItems(const UAccelByteBlueprintsStatistic::FGetAllUserStatItemsSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsStatistic::CreateUserStatItems(const TArray<FString>& StatCodes, const UAccelByteBlueprintsStatistic::FCreateUserStatItemsSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError) {
}


