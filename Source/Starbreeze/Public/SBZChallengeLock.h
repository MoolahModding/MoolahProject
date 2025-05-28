#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeObjectiveInfo.h"
#include "SBZChallengeLock.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeLock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZChallengeObjectiveInfo ChallengeObjectiveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedByChallenge;
    
    STARBREEZE_API FSBZChallengeLock();
};

