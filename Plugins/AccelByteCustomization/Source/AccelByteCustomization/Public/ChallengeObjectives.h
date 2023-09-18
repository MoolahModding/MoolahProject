#pragma once
#include "CoreMinimal.h"
#include "ChallengeStat.h"
#include "ChallengeObjectives.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengeObjectives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeStat> Stats;
    
    FChallengeObjectives();
};

