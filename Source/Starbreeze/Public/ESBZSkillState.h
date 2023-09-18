#pragma once
#include "CoreMinimal.h"
#include "ESBZSkillState.generated.h"

UENUM(BlueprintType)
enum class ESBZSkillState : uint8 {
    Unresearched,
    Locked,
    Unequipped,
    Equipped,
    Aced,
};

