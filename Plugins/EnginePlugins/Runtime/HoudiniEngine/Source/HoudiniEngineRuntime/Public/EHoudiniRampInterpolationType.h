#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampInterpolationType.generated.h"

UENUM()
enum class EHoudiniRampInterpolationType : int8 {
    InValid = -1,
    CONSTANT = 0,
    LINEAR,
    CATMULL_ROM,
    MONOTONE_CUBIC,
    BEZIER,
    BSPLINE,
    HERMITE,
};

