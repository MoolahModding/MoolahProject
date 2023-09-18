#pragma once
#include "CoreMinimal.h"
#include "SBZSkillValue.h"
#include "SBZSkillIntValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillIntValue : public FSBZSkillValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    STARBREEZE_API FSBZSkillIntValue();
};

