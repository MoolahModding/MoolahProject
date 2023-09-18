#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZLookInputStanceSettings.h"
#include "SBZLookInputSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZLookInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval InputDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookInputStanceSettings NormalStance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookInputStanceSettings TargetingStance;
    
    STARBREEZE_API FSBZLookInputSettings();
};

