#pragma once
#include "CoreMinimal.h"
#include "ChallengeProgressItem.h"
#include "ChallengeProgressStat.h"
#include "ChallengeProgressPrerequisite.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengeProgressPrerequisite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeProgressStat> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeProgressItem> Items;
    
    FChallengeProgressPrerequisite();
};

