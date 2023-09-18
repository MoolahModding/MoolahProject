#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveOutputType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniCurveOutputType : uint8 {
    UnrealSpline,
    HoudiniSpline,
};

