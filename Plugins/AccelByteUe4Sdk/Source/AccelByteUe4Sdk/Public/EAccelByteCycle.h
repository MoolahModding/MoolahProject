#pragma once
#include "CoreMinimal.h"
#include "EAccelByteCycle.generated.h"

UENUM(BlueprintType)
enum class EAccelByteCycle : uint8 {
    WEEKLY,
    MONTHLY,
    QUARTERLY,
    YEARLY,
};

