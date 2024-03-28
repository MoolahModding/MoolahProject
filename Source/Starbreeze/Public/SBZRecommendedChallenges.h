#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZRecommendedChallenges.generated.h"

USTRUCT(BlueprintType)
struct FSBZRecommendedChallenges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeData> RecommendedChallengeData;
    
    STARBREEZE_API FSBZRecommendedChallenges();
};

