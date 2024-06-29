#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZPreplanningModifierSettingsData.h"
#include "SBZPreplanningModifierSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBZPreplanningModifierSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPreplanningModifierSettingsData Settings;
    
public:
    USBZPreplanningModifierSettings();

};

