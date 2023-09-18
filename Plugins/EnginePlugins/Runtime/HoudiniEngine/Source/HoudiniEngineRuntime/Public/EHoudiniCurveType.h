#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveType.generated.h"

UENUM()
enum class EHoudiniCurveType : uint8 {
    Invalid = 0xFF,
    Polygon = 0,
    Nurbs,
    Bezier,
    Points,
};

