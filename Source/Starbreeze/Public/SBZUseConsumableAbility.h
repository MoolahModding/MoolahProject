#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZUseConsumableAbility.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZUseConsumableAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
public:
    USBZUseConsumableAbility();

};

