#pragma once
#include "CoreMinimal.h"
#include "ESBZFireType.generated.h"

UENUM(BlueprintType)
enum class ESBZFireType : uint8 {
    Semi,
    Burst,
    Auto,
    Pump,
    Bolt,
};

