#include "AccelByteBlueprintsAchievement.h"

void UAccelByteBlueprintsAchievement::UnlockAchievement(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsAchievement::QueryUserAchievements(const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryUserAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, bool preferUnlocked, const FString& TagQuery) {
}

void UAccelByteBlueprintsAchievement::QueryGlobalAchievementUserContributed(const FString& AchievementCode, const EAccelByteGlobalAchievementContributorsSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryGlobalAchievementUserContributedSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UAccelByteBlueprintsAchievement::QueryGlobalAchievements(const FString& AchievementCode, const EAccelByteGlobalAchievementStatus& AchievementStatus, const EAccelByteGlobalAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryUserGlobalAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UAccelByteBlueprintsAchievement::QueryGlobalAchievementContributors(const FString& AchievementCode, const EAccelByteGlobalAchievementContributorsSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryGlobalAchievementContributorsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UAccelByteBlueprintsAchievement::QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery, bool bGlobal) {
}

void UAccelByteBlueprintsAchievement::GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FGetTagSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UAccelByteBlueprintsAchievement::GetAchievement(const FString& AchievementCode, const UAccelByteBlueprintsAchievement::FGetAchievementSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsAchievement::ClaimGlobalAchievements(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

UAccelByteBlueprintsAchievement::UAccelByteBlueprintsAchievement() {
}

