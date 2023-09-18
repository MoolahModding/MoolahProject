#pragma once
#include "CoreMinimal.h"
#include "SBZMicroCameraSkillSettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMicroCameraSkillSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountUpgradeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationMastery01;
    
    STARBREEZE_API FSBZMicroCameraSkillSettingData();
};

