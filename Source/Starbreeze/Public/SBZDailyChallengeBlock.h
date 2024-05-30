#pragma once
#include "CoreMinimal.h"
#include "SBZDailyChallenge.h"
#include "SBZDailyChallengeBlock.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDailyChallengeBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDailyChallenge> ChallengeArray;
    
    FSBZDailyChallengeBlock();
};

