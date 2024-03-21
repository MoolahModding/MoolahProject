#pragma once
#include "CoreMinimal.h"
#include "ESBZAnimationScalePlayRateType.generated.h"

UENUM(BlueprintType)
enum class ESBZAnimationScalePlayRateType : uint8 {
    Native,
    UpAndDown,
    OnlyUp,
    OnlyDown,
};

