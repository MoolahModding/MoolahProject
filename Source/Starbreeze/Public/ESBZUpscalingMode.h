#pragma once
#include "CoreMinimal.h"
#include "ESBZUpscalingMode.generated.h"

UENUM(BlueprintType)
enum class ESBZUpscalingMode : uint8 {
    None,
    Auto,
    UltraQualityPlus,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
    MAX,
};

