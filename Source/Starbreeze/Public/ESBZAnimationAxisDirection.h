#pragma once
#include "CoreMinimal.h"
#include "ESBZAnimationAxisDirection.generated.h"

UENUM(BlueprintType)
enum class ESBZAnimationAxisDirection : uint8 {
    Forward,
    ForwardLeft45,
    ForwardRight45,
    Backward,
    BackwardLeft45,
    BackwardRight45,
    Left,
    Right,
    Up,
    Down,
    Custom,
};

