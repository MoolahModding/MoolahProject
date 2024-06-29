#pragma once
#include "CoreMinimal.h"
#include "SBZRecommendedChallengeBlock.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZRecommendedChallengeBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChallengeIdArray;
    
    FSBZRecommendedChallengeBlock();
};

