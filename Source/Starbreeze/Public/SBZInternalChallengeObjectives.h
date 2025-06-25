#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeStat.h"
#include "SBZInternalChallengeObjectives.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeObjectives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalChallengeStat> Stats;
    
    STARBREEZE_API FSBZInternalChallengeObjectives();
};

