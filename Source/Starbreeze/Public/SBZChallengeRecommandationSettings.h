#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeRecommandationBlock.h"
#include "SBZChallengeRecommandationSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeRecommandationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeRecommandationBlock> BlockArray;
    
    STARBREEZE_API FSBZChallengeRecommandationSettings();
};

