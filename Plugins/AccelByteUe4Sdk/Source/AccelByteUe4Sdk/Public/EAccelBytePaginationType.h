#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePaginationType.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePaginationType : uint8 {
    FIRST,
    NEXT,
    PREVIOUS,
};

