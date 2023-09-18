#pragma once
#include "CoreMinimal.h"
#include "ESBZSuitPart.generated.h"

UENUM(BlueprintType)
enum class ESBZSuitPart : uint8 {
    SUIT_PART_LOWER,
    SUIT_PART_UPPER,
    SUIT_PART_OUTER,
    MAX,
};

