#pragma once
#include "CoreMinimal.h"
#include "ESBZHurtReactionDirection.generated.h"

UENUM(BlueprintType)
enum class ESBZHurtReactionDirection : uint8 {
    Forward,
    Right,
    Backward,
    Left,
    MAX,
};

