#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "SBZSkillCQCSpecialistSavageTakedown.generated.h"

UCLASS(Blueprintable)
class USBZSkillCQCSpecialistSavageTakedown : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    USBZSkillCQCSpecialistSavageTakedown();

};

