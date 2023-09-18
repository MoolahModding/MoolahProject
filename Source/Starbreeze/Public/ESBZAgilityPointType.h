#pragma once
#include "CoreMinimal.h"
#include "ESBZAgilityPointType.generated.h"

UENUM(BlueprintType)
enum class ESBZAgilityPointType : uint8 {
    FloorStart,
    FloorEnd,
    Wall,
    FrontEdgeTop,
    BackEdgeTop,
    FrontEdgeBottom,
    BackEdgeBottom,
};

