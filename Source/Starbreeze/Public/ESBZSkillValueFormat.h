#pragma once
#include "CoreMinimal.h"
#include "ESBZSkillValueFormat.generated.h"

UENUM(BlueprintType)
enum class ESBZSkillValueFormat : uint8 {
    None,
    Number,
    Percent,
    Meter,
};

