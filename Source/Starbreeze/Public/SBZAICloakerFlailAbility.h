#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeAbility.h"
#include "SBZAICloakerFlailAbility.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class USBZAICloakerFlailAbility : public USBZMeleeAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* AbilityMontage;
    
public:
    USBZAICloakerFlailAbility();

};

