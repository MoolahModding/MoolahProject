#pragma once
#include "CoreMinimal.h"
#include "ESBZHoldOutObjectiveResult.generated.h"

UENUM(BlueprintType)
enum class ESBZHoldOutObjectiveResult : uint8 {
    InProgress,
    Succeeded,
    Failed,
    Aborted,
};

