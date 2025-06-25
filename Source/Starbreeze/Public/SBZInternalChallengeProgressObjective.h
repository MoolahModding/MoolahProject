#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeProgressStat.h"
#include "SBZInternalChallengeProgressObjective.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeProgressObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalChallengeProgressStat> Stats;
    
    STARBREEZE_API FSBZInternalChallengeProgressObjective();
};

