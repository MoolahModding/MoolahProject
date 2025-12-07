#pragma once
#include "CoreMinimal.h"
#include "ESBZInputType.generated.h"

UENUM(BlueprintType)
enum class ESBZInputType : uint8 {
    SingleAction,
    HoldAction,
    Axis,
    MAX,
};

