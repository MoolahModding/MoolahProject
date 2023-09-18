#include "AccelByteBlueprintsAchievement.h"

UAccelByteBlueprintsAchievement::UAccelByteBlueprintsAchievement() {
}

void UAccelByteBlueprintsAchievement::UnlockAchievement(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsAchievement::QueryUserAchievements(const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryUserAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, bool preferUnlocked, const FString& TagQuery) {
}

void UAccelByteBlueprintsAchievement::QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery) {
}

void UAccelByteBlueprintsAchievement::GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FGetTagSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UAccelByteBlueprintsAchievement::GetAchievement(const FString& AchievementCode, const UAccelByteBlueprintsAchievement::FGetAchievementSuccess& OnSuccess, const FDErrorHandler& OnError) {
}


