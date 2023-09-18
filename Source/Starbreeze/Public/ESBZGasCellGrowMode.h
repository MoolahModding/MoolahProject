#pragma once
#include "CoreMinimal.h"
#include "ESBZGasCellGrowMode.generated.h"

UENUM(BlueprintType)
enum class ESBZGasCellGrowMode : uint8 {
    SelfGenerateDensity,
    GetDensityFromNeighbours,
};

