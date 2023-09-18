#pragma once
#include "CoreMinimal.h"
#include "ESBZEvadeType.generated.h"

UENUM(BlueprintType)
enum class ESBZEvadeType : uint8 {
    StandRightSlow,
    StandRightFast,
    StandLeftSlow,
    StandLeftFast,
    CrouchRightSlow,
    CrouchRightFast,
    CrouchLeftSlow,
    CrouchLeftFast,
    None,
};

