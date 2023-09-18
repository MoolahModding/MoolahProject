#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility_CharacterJump.h"
#include "SBZPlayerJumpAbility.generated.h"

UCLASS(Blueprintable)
class USBZPlayerJumpAbility : public USBZGameplayAbility_CharacterJump {
    GENERATED_BODY()
public:
    USBZPlayerJumpAbility();

};

