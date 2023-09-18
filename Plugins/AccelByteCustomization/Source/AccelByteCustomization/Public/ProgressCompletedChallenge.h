#pragma once
#include "CoreMinimal.h"
#include "ProgressCompletedChallenge.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FProgressCompletedChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleted;
    
    FProgressCompletedChallenge();
};

