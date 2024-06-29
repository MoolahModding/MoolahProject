#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillData.h"
#include "SBZSkillEnforcerShockAndAwe.generated.h"

UCLASS(Blueprintable)
class USBZSkillEnforcerShockAndAwe : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AffectedAITypes;
    
    USBZSkillEnforcerShockAndAwe();

};

