#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZPlaceItemTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlaceItemTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZPlaceItemTargetData();
};

