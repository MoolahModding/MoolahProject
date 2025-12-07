#pragma once
#include "CoreMinimal.h"
#include "ESBZBlueprintFunctionValidState.generated.h"

UENUM(BlueprintType)
enum class ESBZBlueprintFunctionValidState : uint8 {
    Valid,
    InvalidObject,
    InvalidFunctionName,
    InvalidParameterCount,
};

