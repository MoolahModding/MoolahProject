#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayAbility.h"
#include "SBZSkillTriggeredHurtReactionAbility.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZSkillTriggeredHurtReactionAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkillTag;
    
public:
    USBZSkillTriggeredHurtReactionAbility();

};

