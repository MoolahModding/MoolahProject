#pragma once
#include "CoreMinimal.h"
#include "EPD3ThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EPD3ThreatLevel : uint8 {
    None,
    Low,
    Mid,
    High,
    VeryHigh,
};

