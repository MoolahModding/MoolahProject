#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZKillHumanShieldAbility.generated.h"

class AController;

UCLASS(Blueprintable)
class USBZKillHumanShieldAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* Controller;
    
public:
    USBZKillHumanShieldAbility();

};

