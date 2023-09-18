#pragma once
#include "CoreMinimal.h"
#include "ESBZNegotiationTradeType.generated.h"

UENUM(BlueprintType)
enum class ESBZNegotiationTradeType : uint8 {
    None,
    Time,
    Player,
    Pack,
};

