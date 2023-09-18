#pragma once
#include "CoreMinimal.h"
#include "ESBZCoverPointScoringMode.generated.h"

UENUM(BlueprintType)
enum class ESBZCoverPointScoringMode : uint8 {
    Min,
    Max,
    Averaged,
    OnlyTarget,
};

