#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZPlaceableToolActivationTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlaceableToolActivationTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZPlaceableToolActivationTargetData();
};

