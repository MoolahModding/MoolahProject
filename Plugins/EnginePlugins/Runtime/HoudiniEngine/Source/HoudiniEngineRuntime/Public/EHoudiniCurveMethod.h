#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.generated.h"

UENUM()
enum class EHoudiniCurveMethod : int8 {
    Invalid = -1,
    CVs = 0,
    Breakpoints,
    Freehand,
};

