#pragma once
#include "CoreMinimal.h"
#include "EFFXFSR3QualityMode.generated.h"

UENUM()
enum class EFFXFSR3QualityMode : int32 {
    NativeAA,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

