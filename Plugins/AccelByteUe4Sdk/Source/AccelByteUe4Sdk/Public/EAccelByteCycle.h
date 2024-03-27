#pragma once
#include "CoreMinimal.h"
#include "EAccelByteCycle.generated.h"

UENUM(BlueprintType)
enum class EAccelByteCycle : uint8 {
    DAILY,
    WEEKLY,
    MONTHLY,
    QUARTERLY,
    YEARLY,
    ANNUALLY,
};

