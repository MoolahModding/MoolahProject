#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZSkillSettingData.h"
#include "SBZSkillSettings.generated.h"

UCLASS(Blueprintable)
class USBZSkillSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkillSettingData Settings;
    
    USBZSkillSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZSkillSettingData Get();
    
};

