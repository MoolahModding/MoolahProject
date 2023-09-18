#pragma once
#include "CoreMinimal.h"
#include "EPD3AssaultPhase.generated.h"

UENUM(BlueprintType)
enum class EPD3AssaultPhase : uint8 {
    Disabled,
    Anticipation,
    Build,
    Sustain,
    Fade,
    Regroup,
    Wait,
};

