#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionQueryComparisonOp.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2SessionQueryComparisonOp : uint8 {
    EQUAL,
    NOT_EQUAL,
    GREATER_THAN,
    GREATER_THAN_EQUAL,
    LESS_THAN,
    LESS_THAN_EQUAL,
    CONTAINS,
    NOT_CONTAINS,
};

