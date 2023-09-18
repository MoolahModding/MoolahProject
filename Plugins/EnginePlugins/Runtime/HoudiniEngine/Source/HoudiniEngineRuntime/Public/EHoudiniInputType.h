#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInputType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniInputType : uint8 {
    Invalid,
    Geometry,
    Curve,
    Asset,
    Landscape,
    World,
    Skeletal,
};

