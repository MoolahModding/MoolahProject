#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsQueryReward.h"
#include "AccelByteModelsRewardInfo.h"
#include "EAccelByteRewardListSortBy.h"
#include "AccelByteBlueprintsReward.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsReward : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryRewardsSuccess, const FAccelByteModelsQueryReward&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetRewardByRewardIdSuccess, const FAccelByteModelsRewardInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetRewardByRewardCodeSuccess, const FAccelByteModelsRewardInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsReward();

    UFUNCTION(BlueprintCallable)
    static void QueryRewards(const FString& EventTopic, int32 Offset, int32 Limit, const EAccelByteRewardListSortBy& SortBy, const UAccelByteBlueprintsReward::FQueryRewardsSuccess& OnSuccess, const UAccelByteBlueprintsReward::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetRewardByRewardId(const FString& RewardId, const UAccelByteBlueprintsReward::FGetRewardByRewardIdSuccess& OnSuccess, const UAccelByteBlueprintsReward::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetRewardByRewardCode(const FString& RewardCode, const UAccelByteBlueprintsReward::FGetRewardByRewardCodeSuccess& OnSuccess, const UAccelByteBlueprintsReward::FBlueprintErrorHandler& OnError);
    
};

