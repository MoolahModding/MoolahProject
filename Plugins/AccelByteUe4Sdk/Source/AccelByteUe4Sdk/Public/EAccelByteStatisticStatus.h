#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStatisticStatus : uint8 {
    INIT,
    TIED,
};

