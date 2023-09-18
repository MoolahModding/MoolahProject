#pragma once
#include "CoreMinimal.h"
#include "ESBZLifeActionDataExecutionMode.generated.h"

UENUM(BlueprintType)
enum class ESBZLifeActionDataExecutionMode : uint8 {
    None,
    DoOnceInterruptible,
    DoOnceNonInterruptible,
    RepeatInterruptible,
    RepeatNonInterruptible,
    PeristentDuringLifeAction,
};

