#pragma once
#include "CoreMinimal.h"
#include "ESBZCuttableState.generated.h"

UENUM(BlueprintType)
enum class ESBZCuttableState : uint8 {
    Whole,
    Cut,
    NotCuttable,
};

