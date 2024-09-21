#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.generated.h"

UENUM(BlueprintType)
enum class EPD3HeistState : uint8 {
    Stealth,
    Search,
    Alarm,
    FirstResponse,
    Negotiation,
    Anticipation,
    Assault,
    Control,
    PointOfNoReturn,
    MAX,
    STEALTH_MAX = Search UMETA(Hidden),
    PAGER_MAX = Search UMETA(Hidden),
    CARRY_MAX = Search UMETA(Hidden),
    CASING_MAX = Search UMETA(Hidden),
    NO_CUFFED_TIMER_MAX = Search UMETA(Hidden),
};

