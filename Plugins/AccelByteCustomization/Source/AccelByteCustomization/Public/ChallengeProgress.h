#pragma once
#include "CoreMinimal.h"
#include "ChallengeProgressObjective.h"
#include "ChallengeProgressPrerequisite.h"
#include "ChallengeProgress.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeProgressPrerequisite Prerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeProgressObjective Objective;
    
    FChallengeProgress();
};

