#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZThrowItemAbility.generated.h"

class ASBZCharacter;
class ASBZThrowable;

UCLASS(Blueprintable)
class USBZThrowItemAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZThrowable* Throwable;
    
public:
    USBZThrowItemAbility();

};

