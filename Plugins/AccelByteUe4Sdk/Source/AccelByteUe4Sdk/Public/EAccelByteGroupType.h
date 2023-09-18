#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGroupType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGroupType : uint8 {
    NONE,
    OPEN,
    PUBLIC,
    PRIVATE,
};

