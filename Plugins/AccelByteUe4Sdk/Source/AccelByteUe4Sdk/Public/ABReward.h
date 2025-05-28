#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsQueryRewardDelegate.h"
#include "DModelsRewardInfoDelegate.h"
#include "EAccelByteRewardListSortBy.h"
#include "ABReward.generated.h"

UCLASS(Blueprintable)
class UABReward : public UObject {
    GENERATED_BODY()
public:
    UABReward();

    UFUNCTION(BlueprintCallable)
    void QueryRewards(const FString& EventTopic, int32 Offset, int32 Limit, const EAccelByteRewardListSortBy& SortBy, const FDModelsQueryReward& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRewardByRewardId(const FString& RewardId, const FDModelsRewardInfo& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRewardByRewardCode(const FString& RewardCode, const FDModelsRewardInfo& OnSuccess, const FDErrorHandler& OnError);
    
};

