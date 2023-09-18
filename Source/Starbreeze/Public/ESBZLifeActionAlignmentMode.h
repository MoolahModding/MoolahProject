#pragma once
#include "CoreMinimal.h"
#include "ESBZLifeActionAlignmentMode.generated.h"

UENUM(BlueprintType)
enum class ESBZLifeActionAlignmentMode : uint8 {
    Translation,
    Rotation,
    Both,
};

