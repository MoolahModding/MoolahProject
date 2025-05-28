#pragma once
#include "CoreMinimal.h"
#include "ESBZItemProgressionSource.h"
#include "SBZChallengeObjectiveInfo.generated.h"

class USBZSkillLineData;

USTRUCT(BlueprintType)
struct FSBZChallengeObjectiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemProgressionSource ItemProgressionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSkillLineData* SkillLine;
    
    STARBREEZE_API FSBZChallengeObjectiveInfo();
};

