#pragma once
#include "CoreMinimal.h"
#include "ESBZEnvTestPathfindingDetail.generated.h"

UENUM(BlueprintType)
enum class ESBZEnvTestPathfindingDetail : uint8 {
    Rough,
    Detailed,
    NoNavPathfinding,
    NoChecks,
};

