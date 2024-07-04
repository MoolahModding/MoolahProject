#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZPhoneToolAbility.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZPhoneToolAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
public:
    USBZPhoneToolAbility();

};

