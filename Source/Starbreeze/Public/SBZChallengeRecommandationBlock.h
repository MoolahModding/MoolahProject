#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeRecommandationSlot.h"
#include "SBZChallengeRecommandationBlock.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeRecommandationBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeRecommandationSlot> SlotArray;
    
    STARBREEZE_API FSBZChallengeRecommandationBlock();
};

