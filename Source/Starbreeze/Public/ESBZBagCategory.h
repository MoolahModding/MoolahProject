#pragma once
#include "CoreMinimal.h"
#include "ESBZBagCategory.generated.h"

UENUM(BlueprintType)
enum class ESBZBagCategory : uint8 {
    Loot,
    Secret,
    Equipment,
    None,
};

