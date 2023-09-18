#include "ABAchievement.h"

UABAchievement::UABAchievement() {
}

void UABAchievement::UnlockAchievement(const FString& AchievementCode, const FDHandler OnSuccess, const FDErrorHandler& OnError) {
}

void UABAchievement::QueryUserAchievements(const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedUserAchievementResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, bool PreferUnlocked, const FString& TagQuery) {
}

void UABAchievement::QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedPublicAchievementResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery) {
}

void UABAchievement::GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedPublicTagResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UABAchievement::GetAchievement(const FString& AchievementCode, const FDModelsMultiLanguageAchievementResponse& OnSuccess, const FDErrorHandler& OnError) {
}


