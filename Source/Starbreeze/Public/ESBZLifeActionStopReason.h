#pragma once
#include "CoreMinimal.h"
#include "ESBZLifeActionStopReason.generated.h"

UENUM(BlueprintType)
enum class ESBZLifeActionStopReason : uint8 {
    Finished,
    Interrupted,
};

