#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZProjectileTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZProjectileTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZProjectileTargetData();
};

