#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveType.generated.h"

UENUM()
enum class EHoudiniCurveType : int8 {
    Invalid = -1,
    Polygon = 0,
    Nurbs,
    Bezier,
    Points,
};

