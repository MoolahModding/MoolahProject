#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutDroneFogSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutDroneFogSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogTransitionSpeed;
    
    STARBREEZE_API FSBZHoldOutDroneFogSettings();
};

