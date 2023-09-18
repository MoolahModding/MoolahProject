#pragma once
#include "CoreMinimal.h"
#include "ESBZShootingPointType.generated.h"

UENUM(BlueprintType)
enum class ESBZShootingPointType : uint8 {
    CrouchLeft,
    StandLeft,
    StandFront,
    StandFrontLow,
    StandRight,
    CrouchRight,
    StandHigh,
    Max,
};

