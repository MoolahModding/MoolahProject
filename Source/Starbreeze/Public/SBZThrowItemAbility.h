#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZThrowItemAbility.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZThrowItemAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
public:
    USBZThrowItemAbility();
};

