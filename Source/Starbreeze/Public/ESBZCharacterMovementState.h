#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterMovementState.generated.h"

UENUM(BlueprintType)
enum class ESBZCharacterMovementState : uint8 {
    Walking,
    Running,
    Crouching,
    Jumping,
    Traversing,
    Sliding,
    Proning,
    Falling,
    MAX,
};

