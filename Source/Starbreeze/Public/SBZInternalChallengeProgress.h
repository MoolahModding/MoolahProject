#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeProgressObjective.h"
#include "SBZInternalChallengeProgressPrerequisite.h"
#include "SBZInternalChallengeProgress.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInternalChallengeProgressPrerequisite Prerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInternalChallengeProgressObjective Objective;
    
    STARBREEZE_API FSBZInternalChallengeProgress();
};

