#pragma once
#include "CoreMinimal.h"
#include "EAccelByteItemStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteItemStatus : uint8 {
    NONE,
    ACTIVE,
    INACTIVE,
};

