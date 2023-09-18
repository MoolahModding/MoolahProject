#pragma once
#include "CoreMinimal.h"
#include "EHoudiniPartType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniPartType : uint8 {
    Invalid,
    Mesh,
    Instancer,
    Curve,
    Volume,
};

