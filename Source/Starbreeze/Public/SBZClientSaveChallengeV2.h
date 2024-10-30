#pragma once
#include "CoreMinimal.h"
#include "SBZClientSaveChallengeV2.generated.h"

USTRUCT(BlueprintType)
struct FSBZClientSaveChallengeV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeCompleted;
    
    STARBREEZE_API FSBZClientSaveChallengeV2();
};

