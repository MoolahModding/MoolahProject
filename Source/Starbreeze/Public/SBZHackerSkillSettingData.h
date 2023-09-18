#pragma once
#include "CoreMinimal.h"
#include "SBZHackerSkillSettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHackerSkillSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceModifierBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalBatteriesAcedBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackableDurationDecreaseMastery;
    
    STARBREEZE_API FSBZHackerSkillSettingData();
};

