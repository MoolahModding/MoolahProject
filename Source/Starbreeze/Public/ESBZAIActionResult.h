#pragma once
#include "CoreMinimal.h"
#include "ESBZAIActionResult.generated.h"

UENUM(BlueprintType)
enum class ESBZAIActionResult : uint8 {
    Failed,
    Succeeded,
    InProgress,
};

