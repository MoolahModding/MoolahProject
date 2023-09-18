#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZFallDamageTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZFallDamageTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZFallDamageTargetData();
};

