#pragma once
#include "CoreMinimal.h"
#include "ESBZChallengeDailyCompletionTimeType.h"
#include "SBZChallengeDailySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeDailySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChallengeDailyCompletionTimeType ChallengeDailyCompletionTimeType;
    
    STARBREEZE_API FSBZChallengeDailySlot();
};

