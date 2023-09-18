#pragma once
#include "CoreMinimal.h"
#include "ESBZAISquadOrderType.generated.h"

UENUM(BlueprintType)
enum class ESBZAISquadOrderType : uint8 {
    None,
    Attack,
    Defend,
    Protect,
    Sabotage,
    Retreat,
};

