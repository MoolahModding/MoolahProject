#pragma once
#include "CoreMinimal.h"
#include "EAkCurveInterpolation.generated.h"

UENUM(BlueprintType)
enum class EAkCurveInterpolation : uint8 {
    Log3,
    Sine,
    Log1,
    InvSCurve,
    Linear,
    SCurve,
    Exp1,
    SineRecip,
    Exp3,
    LastFadeCurve = Exp3,
    Constant,
};

