#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerAbilityBuffType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerAbilityBuffType : uint8 {
    Speed,
    Mitigation,
    Damage,
    MAX,
};

