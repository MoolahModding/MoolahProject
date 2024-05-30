#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZWeaponSettingData.h"
#include "SBZWeaponSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBZWeaponSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSettingData Settings;
    
    USBZWeaponSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZWeaponSettingData Get();
    
};

