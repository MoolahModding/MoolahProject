#pragma once
#include "CoreMinimal.h"
#include "ETimerScorerSetting.generated.h"

UENUM(BlueprintType)
enum class ETimerScorerSetting : uint8 {
    Activate,
    Deactivate,
    Select,
    Deselect,
    Success,
    Fail,
    Abort,
};

