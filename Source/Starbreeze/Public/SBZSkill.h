#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZSkill.h"
#include "SBZSkill.generated.h"

class USBZSkillData;
class USBZSkillLine;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSkill : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSkill SkillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillData* SkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillLine* SkillLine;
    
    USBZSkill();

};

