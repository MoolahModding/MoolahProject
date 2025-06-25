#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeProgressItem.h"
#include "SBZInternalChallengeProgressStat.h"
#include "SBZInternalChallengeProgressPrerequisite.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeProgressPrerequisite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalChallengeProgressStat> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalChallengeProgressItem> Items;
    
    STARBREEZE_API FSBZInternalChallengeProgressPrerequisite();
};

