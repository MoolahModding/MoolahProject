#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillData.h"
#include "Templates/SubclassOf.h"
#include "SBZSkillScramblerKineticShortCircuit.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class USBZSkillScramblerKineticShortCircuit : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ScramblerTargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScramblerDurationTag;
    
    USBZSkillScramblerKineticShortCircuit();

};

