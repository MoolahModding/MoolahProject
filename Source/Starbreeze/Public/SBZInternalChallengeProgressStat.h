#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeProgressStat.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeProgressStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    STARBREEZE_API FSBZInternalChallengeProgressStat();
};

