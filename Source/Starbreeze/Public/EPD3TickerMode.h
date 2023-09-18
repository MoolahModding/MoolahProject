#pragma once
#include "CoreMinimal.h"
#include "EPD3TickerMode.generated.h"

UENUM(BlueprintType)
enum class EPD3TickerMode : uint8 {
    None,
    Casing,
    Assault,
    Negotiation,
    Search,
    MAX,
};

