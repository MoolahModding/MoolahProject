#pragma once
#include "CoreMinimal.h"
#include "ChallengeProgressStat.h"
#include "ChallengeProgressObjective.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengeProgressObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeProgressStat> Stats;
    
    FChallengeProgressObjective();
};

