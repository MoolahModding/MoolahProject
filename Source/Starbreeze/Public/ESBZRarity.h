#pragma once
#include "CoreMinimal.h"
#include "ESBZRarity.generated.h"

UENUM(BlueprintType)
enum class ESBZRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

