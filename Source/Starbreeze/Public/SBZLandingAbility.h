#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZLandingAbility.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZLandingAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
public:
    USBZLandingAbility();

};

