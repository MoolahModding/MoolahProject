#pragma once
#include "CoreMinimal.h"
#include "EHoudiniGeoType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniGeoType : uint8 {
    Invalid,
    Default,
    Intermediate,
    Input,
    Curve,
};

