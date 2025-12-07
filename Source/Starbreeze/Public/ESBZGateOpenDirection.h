#pragma once
#include "CoreMinimal.h"
#include "ESBZGateOpenDirection.generated.h"

UENUM(BlueprintType)
enum class ESBZGateOpenDirection : uint8 {
    Any,
    ForwardOnly,
    BackwardOnly,
};

