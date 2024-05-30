#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZDeveloperSettings.h"
#include "SBZKeyPropertyModeData.h"
#include "SBZLookInputSettings.h"
#include "SBZPlayerSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBZPlayerSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookInputSettings LookInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FSBZKeyPropertyModeData> KeyPropertyModeMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatDelay;
    
    USBZPlayerSettings();

};

