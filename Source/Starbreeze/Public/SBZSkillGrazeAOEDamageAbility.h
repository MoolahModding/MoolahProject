#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZSkillGrazeAOEDamageAbility.generated.h"

class USBZPlayerAbilitySystemComponent;

UCLASS(Blueprintable)
class USBZSkillGrazeAOEDamageAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilitySystemComponent* OwnerAbilitySystem;
    
    USBZSkillGrazeAOEDamageAbility();

};

