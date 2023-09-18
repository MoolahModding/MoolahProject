#pragma once
#include "CoreMinimal.h"
#include "ESBZItemRarity.generated.h"

UENUM(BlueprintType)
enum class ESBZItemRarity : uint8 {
    NoRarity,
    Common,
    Uncommon,
    Rare,
    Mythic,
    Epic,
    Legendary,
};

