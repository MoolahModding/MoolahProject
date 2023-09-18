#pragma once
#include "CoreMinimal.h"
#include "SBZSkillLineCountData.generated.h"

class USBZSkillLineData;

USTRUCT(BlueprintType)
struct FSBZSkillLineCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillLineData* SkillLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    STARBREEZE_API FSBZSkillLineCountData();
};

