#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZMeleeTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMeleeTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZMeleeTargetData();
};

