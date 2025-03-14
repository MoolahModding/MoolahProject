#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZSkillHET5AOEDamageAbility.generated.h"

class USBZPlayerAbilitySystemComponent;

UCLASS(Blueprintable)
class USBZSkillHET5AOEDamageAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilitySystemComponent* OwnerAbilitySystem;
    
public:
    USBZSkillHET5AOEDamageAbility();

};

