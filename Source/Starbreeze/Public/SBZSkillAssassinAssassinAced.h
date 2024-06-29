#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillData.h"
#include "SBZSkillAssassinAssassinAced.generated.h"

UCLASS(Blueprintable)
class USBZSkillAssassinAssassinAced : public USBZSkillData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LawEnforcementTags;
    
public:
    USBZSkillAssassinAssassinAced();

};

