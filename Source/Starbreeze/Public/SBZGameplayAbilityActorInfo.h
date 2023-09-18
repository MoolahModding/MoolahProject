#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "SBZGameplayAbilityActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayAbilityActorInfo : public FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZGameplayAbilityActorInfo();
};

