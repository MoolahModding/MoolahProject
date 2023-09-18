#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZReloadTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZReloadTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZReloadTargetData();
};

