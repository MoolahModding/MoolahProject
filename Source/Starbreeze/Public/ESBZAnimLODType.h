#pragma once
#include "CoreMinimal.h"
#include "ESBZAnimLODType.generated.h"

UENUM(BlueprintType)
enum class ESBZAnimLODType : uint8 {
    Full,
    LocomotionOnly,
    IdleOnly,
};

