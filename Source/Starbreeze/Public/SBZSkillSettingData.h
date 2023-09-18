#pragma once
#include "CoreMinimal.h"
#include "SBZCutterSkillSettingData.h"
#include "SBZHackerSkillSettingData.h"
#include "SBZMicroCameraSkillSettingData.h"
#include "SBZSkillSettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHackerSkillSettingData Hacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMicroCameraSkillSettingData MicroCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCutterSkillSettingData Cutter;
    
    STARBREEZE_API FSBZSkillSettingData();
};

