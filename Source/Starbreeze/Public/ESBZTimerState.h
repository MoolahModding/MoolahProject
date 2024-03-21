#pragma once
#include "CoreMinimal.h"
#include "ESBZTimerState.generated.h"

UENUM(BlueprintType)
enum class ESBZTimerState : uint8 {
    Inactive,
    Running,
    Paused,
    Sabotaged,
    Done,
};

