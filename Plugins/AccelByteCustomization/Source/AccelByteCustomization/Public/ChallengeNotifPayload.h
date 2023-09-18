#pragma once
#include "CoreMinimal.h"
#include "ChallengeReward.h"
#include "ChallengeNotifPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengeNotifPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeReward reward;
    
    FChallengeNotifPayload();
};

