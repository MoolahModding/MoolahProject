#pragma once
#include "CoreMinimal.h"
#include "SBZDailyChallenge.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDailyChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationObjectiveStartStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeCompleted;
    
    FSBZDailyChallenge();
};

