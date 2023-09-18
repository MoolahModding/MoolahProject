#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZWeaponModificationData.h"
#include "SBZWeaponModificationSettings.generated.h"

UCLASS(Blueprintable)
class USBZWeaponModificationSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponModificationData Settings;
    
    USBZWeaponModificationSettings();

};

