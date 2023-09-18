#pragma once
#include "CoreMinimal.h"
#include "ESBZUpscalingMode.generated.h"

UENUM(BlueprintType)
enum class ESBZUpscalingMode : uint8 {
    Native,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
    Invalid = -0x1,
};

