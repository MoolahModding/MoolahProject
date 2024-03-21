#pragma once
#include "CoreMinimal.h"
#include "SBZBackendSettings.h"
#include "SBZPlatformsBackendSettingsInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlatformsBackendSettingsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBackendSettings> PlatformBackendSettings;
    
    FSBZPlatformsBackendSettingsInfo();
};

