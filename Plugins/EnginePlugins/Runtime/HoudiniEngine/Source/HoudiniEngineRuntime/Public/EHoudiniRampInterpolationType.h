#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampInterpolationType.generated.h"

UENUM()
enum class EHoudiniRampInterpolationType : uint8 {
    InValid = 0xFF,
    CONSTANT = 0,
    LINEAR,
    CATMULL_ROM,
    MONOTONE_CUBIC,
    BEZIER,
    BSPLINE,
    HERMITE,
};

