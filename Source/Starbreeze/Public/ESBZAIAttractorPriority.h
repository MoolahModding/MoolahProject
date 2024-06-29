#pragma once
#include "CoreMinimal.h"
#include "ESBZAIAttractorPriority.generated.h"

UENUM(BlueprintType)
enum class ESBZAIAttractorPriority : uint8 {
    VeryLow,
    Low = 25,
    Medium = 50,
    High = 75,
    VeryHigh = 100,
    MAX,
};

