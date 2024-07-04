#pragma once
#include "CoreMinimal.h"
#include "ESBZSabotagePointState.generated.h"

UENUM(BlueprintType)
enum class ESBZSabotagePointState : uint8 {
    Disabled,
    Enabled,
    Sabotaged,
};

