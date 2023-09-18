#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerGestureType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerGestureType : uint8 {
    None,
    Pointing,
    MAX,
};

