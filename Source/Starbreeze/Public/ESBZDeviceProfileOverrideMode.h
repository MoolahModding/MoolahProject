#pragma once
#include "CoreMinimal.h"
#include "ESBZDeviceProfileOverrideMode.generated.h"

UENUM(BlueprintType)
enum class ESBZDeviceProfileOverrideMode : uint8 {
    PerformanceMode,
    QualityMode,
};

