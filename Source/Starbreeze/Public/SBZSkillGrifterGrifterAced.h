#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "SBZSkillGrifterGrifterAced.generated.h"

UCLASS(Blueprintable)
class USBZSkillGrifterGrifterAced : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    USBZSkillGrifterGrifterAced();

};

