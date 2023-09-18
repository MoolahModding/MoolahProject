#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeProgressStat.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeProgressStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetProgress;
    
    STARBREEZE_API FSBZChallengeProgressStat();
};

