#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillData.h"
#include "Templates/SubclassOf.h"
#include "SBZSkillHackingElectricInterferenceBase.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class USBZSkillHackingElectricInterferenceBase : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetDurationTag;
    
    USBZSkillHackingElectricInterferenceBase();

};

