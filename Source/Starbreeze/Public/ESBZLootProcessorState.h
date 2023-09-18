#pragma once
#include "CoreMinimal.h"
#include "ESBZLootProcessorState.generated.h"

UENUM(BlueprintType)
enum class ESBZLootProcessorState : uint8 {
    Inactive,
    Running,
    Paused,
    ProcessedBag,
};

