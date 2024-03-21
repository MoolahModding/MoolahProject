#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZGameplayAbility_Equip.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class USBZGameplayAbility_Equip : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingMontage;
    
public:
    USBZGameplayAbility_Equip();
};

