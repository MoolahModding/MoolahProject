#pragma once
#include "CoreMinimal.h"
#include "ESBZDebugSkillMenuFilter.generated.h"

UENUM(BlueprintType)
enum class ESBZDebugSkillMenuFilter : uint8 {
    All,
    Selected,
    Unselected,
};

