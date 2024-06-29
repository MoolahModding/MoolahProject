#pragma once
#include "CoreMinimal.h"
#include "ESBZVoicePriority.generated.h"

UENUM(BlueprintType)
enum class ESBZVoicePriority : uint8 {
    VeryLowPriority,
    LowPriority,
    MediumPriority,
    HighPriority,
    VeryHighPriority,
    ExtremelyHighPriority = 100,
    MaxPriority = 255,
};

