#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsMultiLanguageAchievementResponseDelegate.h"
#include "DModelsPaginatedPublicAchievementResponseDelegate.h"
#include "DModelsPaginatedPublicTagResponseDelegate.h"
#include "DModelsPaginatedUserAchievementResponseDelegate.h"
#include "EAccelByteAchievementListSortBy.h"
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
    void QueryAchievements(const FString& Language, const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedPublicAchievementResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit, const FString& TagQuery);
    
    UFUNCTION(BlueprintCallable)
    void GetTags(const FString& Name, const EAccelByteAchievementListSortBy& SortBy, const FDModelsPaginatedPublicTagResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievement(const FString& AchievementCode, const FDModelsMultiLanguageAchievementResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

