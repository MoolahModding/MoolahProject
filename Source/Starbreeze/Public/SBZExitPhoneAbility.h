#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZExitPhoneAbility.generated.h"

class AActor;
class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZExitPhoneAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ViewTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
public:
    USBZExitPhoneAbility();

};

