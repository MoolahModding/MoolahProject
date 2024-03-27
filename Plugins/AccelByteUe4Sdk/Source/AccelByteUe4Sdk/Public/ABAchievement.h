#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsMultiLanguageAchievementResponseDelegate.h"
#include "DModelsPaginatedGlobalAchievementContributorsResponseDelegate.h"
#include "DModelsPaginatedGlobalAchievementUserContributedResponseDelegate.h"
#include "DModelsPaginatedPublicAchievementResponseDelegate.h"
#include "DModelsPaginatedPublicTagResponseDelegate.h"
#include "DModelsPaginatedUserAchievementResponseDelegate.h"
#include "DModelsPaginatedUserGlobalAchievementResponseDelegate.h"
#include "EAccelByteAchievementListSortBy.h"
#include "EAccelByteGlobalAchievementContributorsSortBy.h"
#include "EAccelByteGlobalAchievementListSortBy.h"
#include "EAccelByteGlobalAchievementStatus.h"
#include "ABAchievement.generated.h"

UCLASS(Blueprintable)
class UABAchievement : public UObject {
    GENERATED_BODY()
public:
    UABAchievement();
    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(const FString& AchievementCode, const FDHandler OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void QueryUserAchievements(const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedUserAchievementResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, bool PreferUnlocked, const FString& TagQuery);
    
    UFUNCTION(BlueprintCallable)
    void QueryGlobalAchievementUserContributed(const FString& AchievementCode, const EAccelByteGlobalAchievementContributorsSortBy& SortBy, const FDModelsPaginatedGlobalAchievementUserContributedResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void QueryGlobalAchievements(const FString& AchievementCode, const EAccelByteGlobalAchievementStatus& AchievementStatus, const EAccelByteGlobalAchievementListSortBy& SortBy, const FDModelsPaginatedUserGlobalAchievementResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void QueryGlobalAchievementContributors(const FString& AchievementCode, const EAccelByteGlobalAchievementContributorsSortBy& SortBy, const FDModelsPaginatedGlobalAchievementContributorsResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedPublicAchievementResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery, bool bGlobal);
    
    UFUNCTION(BlueprintCallable)
    void GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedPublicTagResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievement(const FString& AchievementCode, const FDModelsMultiLanguageAchievementResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ClaimGlobalAchievements(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
};

