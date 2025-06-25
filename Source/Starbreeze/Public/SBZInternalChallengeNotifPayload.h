#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeReward.h"
#include "SBZInternalChallengeNotifPayload.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeNotifPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInternalChallengeReward reward;
    
    STARBREEZE_API FSBZInternalChallengeNotifPayload();
};

