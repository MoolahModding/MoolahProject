#pragma once
#include "CoreMinimal.h"
#include "ESBZAIAttractorPriority.generated.h"

UENUM(BlueprintType)
enum class ESBZAIAttractorPriority : uint8 {
    VeryLow,
    Low = 0x19,
    Medium = 0x32,
    High = 0x4B,
    VeryHigh = 0x64,
    MAX,
};

