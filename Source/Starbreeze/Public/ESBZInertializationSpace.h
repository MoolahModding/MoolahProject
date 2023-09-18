#pragma once
#include "CoreMinimal.h"
#include "ESBZInertializationSpace.generated.h"

UENUM(BlueprintType)
enum class ESBZInertializationSpace : uint8 {
    Default,
    WorldSpace,
    WorldRotation,
};

