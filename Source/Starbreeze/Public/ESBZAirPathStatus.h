#pragma once
#include "CoreMinimal.h"
#include "ESBZAirPathStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZAirPathStatus : uint8 {
    Rejected,
    Failed,
    Partial,
    Succeeded,
    InProgress,
};

