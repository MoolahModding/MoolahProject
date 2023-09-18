#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWinGDKAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHeadMountedDisplayAudioDevice;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 uMaxSystemAudioObjects;
    
    AKAUDIO_API FAkWinGDKAdvancedInitializationSettings();
};

