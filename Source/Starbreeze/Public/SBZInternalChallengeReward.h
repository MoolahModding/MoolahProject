#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeStat.h"
#include "SBZInternalRewardItemDetails.h"
#include "SBZInternalChallengeReward.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalChallengeStat> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalRewardItemDetails> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardId;
    
    STARBREEZE_API FSBZInternalChallengeReward();
};

