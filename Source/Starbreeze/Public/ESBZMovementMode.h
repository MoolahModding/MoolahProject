#pragma once
#include "CoreMinimal.h"
#include "ESBZMovementMode.generated.h"

UENUM(BlueprintType)
enum class ESBZMovementMode : uint8 {
    None,
    Walking,
    NavWalking,
    Falling,
    Swimming,
    Flying,
    Custom,
};

