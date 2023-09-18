#pragma once
#include "CoreMinimal.h"
#include "EAccelByteRuleCriteria.generated.h"

UENUM(BlueprintType)
enum class EAccelByteRuleCriteria : uint8 {
    MINIMUM,
    MAXIMUM,
    EQUAL,
};

