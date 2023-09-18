#pragma once
#include "CoreMinimal.h"
#include "EXformParameter.generated.h"

UENUM(BlueprintType)
enum class EXformParameter : uint8 {
    TX,
    TY,
    TZ,
    RX,
    RY,
    RZ,
    SX,
    SY,
    SZ,
    COUNT,
};

