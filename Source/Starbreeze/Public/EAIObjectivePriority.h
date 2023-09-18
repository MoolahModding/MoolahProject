#pragma once
#include "CoreMinimal.h"
#include "EAIObjectivePriority.generated.h"

UENUM(BlueprintType)
enum class EAIObjectivePriority : uint8 {
    LowPriority,
    StandardPriority,
    HighPriority,
    MAX,
};

