#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZMeleeAbility.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZMeleeAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
public:
    USBZMeleeAbility();
};

