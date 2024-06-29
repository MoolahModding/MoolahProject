#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZChallengesDsSettingsBlock.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengesDsSettingsBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeData> SlotArray;
    
    STARBREEZE_API FSBZChallengesDsSettingsBlock();
};

