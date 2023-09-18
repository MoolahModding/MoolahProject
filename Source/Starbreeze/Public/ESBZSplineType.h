#pragma once
#include "CoreMinimal.h"
#include "ESBZSplineType.generated.h"

UENUM(BlueprintType)
enum class ESBZSplineType : uint8 {
    Ascending,
    Descending,
    Forward,
    Reverse,
};

