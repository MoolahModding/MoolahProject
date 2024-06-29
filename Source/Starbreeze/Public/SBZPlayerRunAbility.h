#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility_CharacterRun.h"
#include "SBZPlayerRunAbility.generated.h"

UCLASS(Blueprintable)
class USBZPlayerRunAbility : public USBZGameplayAbility_CharacterRun {
    GENERATED_BODY()
public:
    USBZPlayerRunAbility();

};

