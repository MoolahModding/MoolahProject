#pragma once
#include "CoreMinimal.h"
#include "ChallengeErrorResponse.h"
#include "CompleteChallenge.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FCompleteChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeErrorResponse Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FCompleteChallenge();
};

