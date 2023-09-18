#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveGroup.generated.h"

UENUM(BlueprintType)
enum class ESBZObjectiveGroup : uint8 {
    None,
    MainObjective,
    OtherObjective0,
    OtherObjective1,
    OtherObjective2,
    OtherObjective3,
    OtherObjective4,
};

