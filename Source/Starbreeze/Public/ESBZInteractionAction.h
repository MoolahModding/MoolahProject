#pragma once
#include "CoreMinimal.h"
#include "ESBZInteractionAction.generated.h"

UENUM(BlueprintType)
enum class ESBZInteractionAction : uint8 {
    None,
    GetDown,
    HogTie,
    Follow,
    TradeHostage,
    MAX,
};

