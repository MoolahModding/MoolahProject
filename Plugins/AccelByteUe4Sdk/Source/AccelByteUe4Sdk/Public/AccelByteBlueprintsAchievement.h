#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsMultiLanguageAchievement.h"
#include "AccelByteModelsPaginatedGlobalAchievementContributors.h"
#include "AccelByteModelsPaginatedGlobalAchievementUserContributed.h"
#include "AccelByteModelsPaginatedPublicAchievement.h"
#include "AccelByteModelsPaginatedPublicTag.h"
#include "AccelByteModelsPaginatedUserAchievement.h"
#include "AccelByteModelsPaginatedUserGlobalAchievement.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "EAccelByteAchievementListSortBy.h"
#include "EAccelByteGlobalAchievementContributorsSortBy.h"
#include "EAccelByteGlobalAchievementListSortBy.h"
#include "EAccelByteGlobalAchievementStatus.h"
#include "AccelByteBlueprintsAchievement.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsAchievement : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryUserGlobalAchievementsSuccess, FAccelByteModelsPaginatedUserGlobalAchievement, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryUserAchievementsSuccess, const FAccelByteModelsPaginatedUserAchievement&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryGlobalAchievementUserContributedSuccess, FAccelByteModelsPaginatedGlobalAchievementUserContributed, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryGlobalAchievementContributorsSuccess, FAccelByteModelsPaginatedGlobalAchievementContributors, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryAchievementsSuccess, const FAccelByteModelsPaginatedPublicAchievement&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetTagSuccess, const FAccelByteModelsPaginatedPublicTag&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAchievementSuccess, const FAccelByteModelsMultiLanguageAchievement&, Result);
    
    UAccelByteBlueprintsAchievement();
    UFUNCTION(BlueprintCallable)
    static void UnlockAchievement(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void QueryUserAchievements(const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryUserAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, bool preferUnlocked, const FString& TagQuery);
    
    UFUNCTION(BlueprintCallable)
    static void QueryGlobalAchievementUserContributed(const FString& AchievementCode, const EAccelByteGlobalAchievementContributorsSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryGlobalAchievementUserContributedSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    static void QueryGlobalAchievements(const FString& AchievementCode, const EAccelByteGlobalAchievementStatus& AchievementStatus, const EAccelByteGlobalAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryUserGlobalAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    static void QueryGlobalAchievementContributors(const FString& AchievementCode, const EAccelByteGlobalAchievementContributorsSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryGlobalAchievementContributorsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    static void QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery, bool bGlobal);
    
    UFUNCTION(BlueprintCallable)
    static void GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FGetTagSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    static void GetAchievement(const FString& AchievementCode, const UAccelByteBlueprintsAchievement::FGetAchievementSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void ClaimGlobalAchievements(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
};

