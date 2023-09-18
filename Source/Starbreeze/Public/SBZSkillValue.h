#pragma once
#include "CoreMinimal.h"
#include "ESBZSkillValueFormat.h"
#include "SBZSkillValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSkillValueFormat FormatType;
    
    STARBREEZE_API FSBZSkillValue();
};

