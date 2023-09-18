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
    ExtremelyHighPriority = 0x64,
    MaxPriority = 0xFF,
};

