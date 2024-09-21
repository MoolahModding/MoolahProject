#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZDailyChallenges.generated.h"

USTRUCT(BlueprintType)
struct FSBZDailyChallenges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeData> DailyChallengeData;
    
    STARBREEZE_API FSBZDailyChallenges();
};

