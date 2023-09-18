#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsMultiLanguageAchievement.h"
#include "AccelByteModelsPaginatedPublicAchievement.h"
#include "AccelByteModelsPaginatedPublicTag.h"
#include "AccelByteModelsPaginatedUserAchievement.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "EAccelByteAchievementListSortBy.h"
#include "AccelByteBlueprintsAchievement.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsAchievement : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryUserAchievementsSuccess, const FAccelByteModelsPaginatedUserAchievement&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryAchievementsSuccess, const FAccelByteModelsPaginatedPublicAchievement&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetTagSuccess, const FAccelByteModelsPaginatedPublicTag&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAchievementSuccess, const FAccelByteModelsMultiLanguageAchievement&, Result);
    
    UAccelByteBlueprintsAchievement();

    UFUNCTION(BlueprintCallable)
    static void UnlockAchievement(const FString& AchievementCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void QueryUserAchievements(const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryUserAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, bool preferUnlocked, const FString& TagQuery);
    
    UFUNCTION(BlueprintCallable)
    static void QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FQueryAchievementsSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery);
    
    UFUNCTION(BlueprintCallable)
    static void GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const UAccelByteBlueprintsAchievement::FGetTagSuccess& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    static void GetAchievement(const FString& AchievementCode, const UAccelByteBlueprintsAchievement::FGetAchievementSuccess& OnSuccess, const FDErrorHandler& OnError);
    
};

