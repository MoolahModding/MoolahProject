#pragma once
#include "CoreMinimal.h"
#include "SBZSkillValue.h"
#include "SBZSkillFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillFloatValue : public FSBZSkillValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    STARBREEZE_API FSBZSkillFloatValue();
};

