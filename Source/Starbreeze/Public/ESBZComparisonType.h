#pragma once
#include "CoreMinimal.h"
#include "ESBZComparisonType.generated.h"

UENUM(BlueprintType)
enum class ESBZComparisonType : uint8 {
    EQUAL,
    SMALLER,
    SMALLEREQUAL,
    LARGER,
    LARGEREQUAL,
};

