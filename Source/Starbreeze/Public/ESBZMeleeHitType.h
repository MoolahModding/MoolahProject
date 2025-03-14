#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeHitType.generated.h"

UENUM(BlueprintType)
enum class ESBZMeleeHitType : uint8 {
    None,
    Left,
    Right,
    Front,
    MAX,
};

