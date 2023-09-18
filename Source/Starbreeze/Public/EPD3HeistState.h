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
    STEALTH_MAX = 0x1 UMETA(Hidden),
    PAGER_MAX = 0x1 UMETA(Hidden),
    CARRY_MAX = 0x1 UMETA(Hidden),
    CASING_MAX = 0x1 UMETA(Hidden),
    NO_CUFFED_TIMER_MAX = 0x1 UMETA(Hidden),
};

