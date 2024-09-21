#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZPlayerSpawnAnimationAbility.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class USBZPlayerSpawnAnimationAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayedMontage;
    
public:
    USBZPlayerSpawnAnimationAbility();

};

