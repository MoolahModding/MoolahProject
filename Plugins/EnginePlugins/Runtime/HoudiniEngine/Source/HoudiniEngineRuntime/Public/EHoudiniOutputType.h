#pragma once
#include "CoreMinimal.h"
#include "EHoudiniOutputType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniOutputType : uint8 {
    Invalid,
    Mesh,
    Instancer,
    Landscape,
    Curve,
    Skeletal,
};

