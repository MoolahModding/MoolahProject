#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsSeasonClaimRewardRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsSeasonClaimRewardResponseDelegate.h"
#include "DModelsSeasonInfoDelegate.h"
#include "DModelsUserSeasonInfoDelegate.h"
#include "ABSeasonPass.generated.h"

UCLASS(Blueprintable)
class UABSeasonPass : public UObject {
    GENERATED_BODY()
public:
    UABSeasonPass();
    UFUNCTION(BlueprintCallable)
    void GetUserSeason(const FString& SeasonId, const FDModelsUserSeasonInfo& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentUserSeason(const FDModelsUserSeasonInfo& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSeason(const FString& Language, const FDModelsSeasonInfo& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ClaimRewards(const FAccelByteModelsSeasonClaimRewardRequest& RewardRequest, const FDModelsSeasonClaimRewardResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkClaimRewards(const FDModelsSeasonClaimRewardResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

