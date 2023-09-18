#pragma once
#include "CoreMinimal.h"
#include "ESBZAIVisibilityNodeComputationFrequency.generated.h"

UENUM(BlueprintType)
enum class ESBZAIVisibilityNodeComputationFrequency : uint8 {
    Once,
    EveryFrame,
    Automatic,
};

