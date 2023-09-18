#pragma once
#include "CoreMinimal.h"
#include "SBZSkillRewardData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExperiencePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ResearchedSkillLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ProgressedSkillLines;
    
    STARBREEZE_API FSBZSkillRewardData();
};

