#pragma once
#include "CoreMinimal.h"
#include "ESBZSkillType.generated.h"

UENUM(BlueprintType)
enum class ESBZSkillType : uint8 {
    None,
    BaseSkill,
    Mastery,
    Upgrade,
};

