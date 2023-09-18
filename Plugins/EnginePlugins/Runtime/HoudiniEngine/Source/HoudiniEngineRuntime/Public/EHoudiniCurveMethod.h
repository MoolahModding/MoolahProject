#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.generated.h"

UENUM(BlueprintType)
enum class EHoudiniCurveMethod : uint8 {
    Invalid = -0x1,
    CVs,
    Breakpoints,
    Freehand,
};

