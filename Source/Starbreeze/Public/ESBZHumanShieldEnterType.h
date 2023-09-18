#pragma once
#include "CoreMinimal.h"
#include "ESBZHumanShieldEnterType.generated.h"

UENUM(BlueprintType)
enum class ESBZHumanShieldEnterType : uint8 {
    Front,
    Back,
    Left,
    Right,
    Invalid,
};

