#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility_CharacterCrouch.h"
#include "SBZPlayerCrouchAbility.generated.h"

UCLASS(Blueprintable)
class USBZPlayerCrouchAbility : public USBZGameplayAbility_CharacterCrouch {
    GENERATED_BODY()
public:
    USBZPlayerCrouchAbility();

};

