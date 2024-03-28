#pragma once
#include "CoreMinimal.h"
#include "ESBZChallengeRecommandationsPriorityType.generated.h"

UENUM(BlueprintType)
enum class ESBZChallengeRecommandationsPriorityType : uint8 {
    CloseToCompletion,
    AnyProgress,
    LowProgress,
};

