#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillData.h"
#include "SBZSkillDemolitionistBlowback.generated.h"

UCLASS(Blueprintable)
class USBZSkillDemolitionistBlowback : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PawnTypeContainer;
    
    USBZSkillDemolitionistBlowback();

};

