#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility_CharacterTarget.h"
#include "SBZPlayerTargetAbility.generated.h"

UCLASS(Blueprintable)
class USBZPlayerTargetAbility : public USBZGameplayAbility_CharacterTarget {
    GENERATED_BODY()
public:
    USBZPlayerTargetAbility();
};

