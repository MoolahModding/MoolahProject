#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZProgressionSaveCachedChallengesData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProgressionSaveCachedChallengesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZChallengeData> CachedChallenges;
    
    FSBZProgressionSaveCachedChallengesData();
};

